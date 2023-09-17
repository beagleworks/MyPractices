// ABC314E

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr double dINF = 999876543.2;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  vector<int> C(n), P(n);
  vector S(n, vector<int>(101, 0));
  for (int i=0; i<n; i++) {
    cin >> C[i] >> P[i];
    for (int j=0; j<P[i]; j++) {
      int s;
      cin >> s;
      S[i][s]++;
    }
  }

  // solve
  vector<double> dp(m+1, dINF);
  dp[0] = 0;
  for (int i=1; i<=m; i++) {
    for (int j=0; j<n; j++) {
      double exp = 0;
      for (int k=1; k<=100; k++) {
        exp += dp[max(0, i-k)] * S[j][k];
      }
      exp /= P[j];
      exp += C[j];
      exp *= (double)P[j] / (P[j] - S[j][0]);
      dp[i] = min(dp[i], exp);
    }
  }  

  // output

  printf("%.10f\n", dp[m]);
  return 0;

}