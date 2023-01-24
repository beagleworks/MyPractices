// ABC084C

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

  vector<tuple<int, int, int>> V;
  for (int i=0; i<n-1; i++) {
    int c, s, f;
    cin >> c >> s >> f;
    V.emplace_back(c, s, f);
  }

  // solve
  for (int i=0; i<n-1; i++) {
    auto [c, s, f] = V[i];
    int ans = s + c;
    for (int j=i+1; j<n-1; j++) {
      auto [cx, sx, fx] = V[j];
      if (ans <= sx) ans = sx + cx;
      else ans += cx + (ans % fx == 0 ? 0 : fx - (ans % fx));
    }

    cout << ans << endl;
  }

  // output
  cout << 0 << endl;
  return 0;

}