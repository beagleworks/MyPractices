// KEYENCE2020_A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int h, w, n;
  cin >> h >> w >> n;

  // solve
  int x = max(h, w);
  int ans = (n+x-1) / x;

  // output
  cout << ans << endl;
  return 0;

}