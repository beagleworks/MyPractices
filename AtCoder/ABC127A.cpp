// ABC127A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int a, b;
  cin >> a >> b;

  // solve
  int ans = (a >= 13 ? b : a >= 6 ? b/2 : 0);

  // output
  cout << ans << endl;
  return 0;

}