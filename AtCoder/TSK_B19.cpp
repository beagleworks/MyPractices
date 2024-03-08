#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()

int main(){

  // input
  int n, w;
  cin >> n >> w;

  vector<long> W(n);
  vector<int> V(n);
  for (int i=0; i<n; i++) {
    cin >> W[i] >> V[i];
  }

  // solve
  vector<long> dp(101001, w+1);
  dp[0] = 0;
  for (int i=0; i<n; i++) {
    for (int j=1e5; j>=0; j--) {
      if (dp[j]+W[i] > w) continue;
      dp[j+V[i]] = min(dp[j+V[i]], dp[j]+W[i]);
    }
  }

  // output
  for (int i=101000; i>=0; i--) {
    if (dp[i] <= w) {
      cout << i << endl;
      return 0;
    }
  }

  cout << 0 << endl;
  return 0;

}