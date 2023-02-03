// ARC004A

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

  vector<pair<int,int>> P;
  for (int i=0; i<n; i++) {
    int x, y;
    cin >> x >> y;
    P.emplace_back(x, y);
  }

  // solve
  double ans = 0.0;
  for (int i=0; i<n-1; i++) {
    for (int j=i+1; j<n; j++) {
      double len = sqrt((P[j].first-P[i].first) * (P[j].first-P[i].first) + (P[j].second-P[i].second) * (P[j].second-P[i].second));
      ans = max(ans, len);
    }
  }

  // output
  printf("%.10f\n", ans);
  return 0;

}