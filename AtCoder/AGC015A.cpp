// AGC015A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, a, b;
  cin >> n >> a >> b;

  // solve
  long long ans = 0LL;
  if (n == 1) ans = (a == b ? 1 : 0);
  else if (a > b) ans = 0;
  else {
    ans = (long long)b*(n-2) - (long long)a*(n-2) + 1;
  }

  // output
  cout << ans << endl;
  return 0;

}