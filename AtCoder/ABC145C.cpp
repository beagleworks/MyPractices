// ABC145C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  vector<pair<int, int>> P;
  for (int i=0; i<n; i++) {
    int x, y;
    cin >> x >> y;
    P.emplace_back(x, y);
  }

  // solve
  vector<int> vb(n);
  iota(ALL(vb), 0);
  double ans = 0.0;
  do{
    double sum = 0.0;
    for (int i=1; i<n; i++) {
      sum += sqrt((P[vb[i]].first - P[vb[i-1]].first)*(P[vb[i]].first - P[vb[i-1]].first) + (P[vb[i]].second - P[vb[i-1]].second)*(P[vb[i]].second - P[vb[i-1]].second));
    }
    ans += sum;
  }
  while(next_permutation(ALL(vb)));

  double fact = 1;
  for (int i=1; i<=n; i++) fact *= i;

  ans /= fact;

  // output
  printf("%.10f\n", ans);
  return 0;

}