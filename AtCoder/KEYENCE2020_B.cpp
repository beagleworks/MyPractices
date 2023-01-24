// KEYENCE2020_B

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

  vector<pair<int, int>> sch;
  for (int i=0; i<n; i++) {
    int x, l;
    cin >> x >> l;
    sch.emplace_back(x-l, x+l);
  }

  // solve
  sort(ALL(sch), [](auto x, auto y){
    return x.second == y.second ? x.first < y.first : x.second < y.second; 
  });

  int ans = 0, t = -INF;
  for (auto [s, e] : sch) {
    if (s >= t) {
      ans++;
      t = e;
    }
  }

  // output
  cout << ans << endl;
  return 0;

}