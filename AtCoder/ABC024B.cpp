// ABC024B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, t;
  cin >> n >> t;

  // solve
  int ans = 0;
  int exp = 0;
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    if (a <= exp) ans += (a+t - exp);
    else ans += t;
    exp = a+t;
  }

  // output
  cout << ans << endl;
  return 0;

}