// ABC227A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, k, a;
  cin >> n >> k >> a;
  a--;

  // solve
  int ans = (k % n + a) % n;
  if (ans == 0) ans = n;

  // output
  cout << ans << endl;
  return 0;

}