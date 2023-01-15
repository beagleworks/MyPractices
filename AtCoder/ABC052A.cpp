// ABC052A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  // solve
  int ans = max(a*b, c*d);

  // output
  cout << ans << endl;
  return 0;

}