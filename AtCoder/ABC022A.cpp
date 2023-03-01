// ABC022A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, s, t, w;
  cin >> n >> s >> t >> w;

  // solve
  int ans = 0;
  if (s <= w && w <= t) ans++;
  for (int i=0; i<n-1; i++) {
    int a;
    cin >> a;
    w += a;
    if (s <= w && w <= t) ans++;
  }

  // output
  cout << ans << endl;
  return 0;

}