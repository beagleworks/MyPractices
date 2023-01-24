// ABC095B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, x;
  cin >> n >> x;

  // solve
  int ans = n, mn = INF;
  for (int i=0; i<n; i++) {
    int m;
    cin >> m;
    x -= m;
    mn = min(m, mn);
  }

  ans += x/mn;

  // output
  cout << ans << endl;
  return 0;

}