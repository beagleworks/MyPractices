// ABC204A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int x, y;
  cin >> x >> y;

  // solve
  int ans = (x == y ? x : x+y == 3 ? 0 : x+y == 2 ? 1 : 2);

  // output
  cout << ans << endl;
  return 0;

}