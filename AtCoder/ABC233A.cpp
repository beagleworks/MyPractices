// ABC233A

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
  int ans = (y - x + 9) / 10;

  // output
  cout << max(ans, 0) << endl;
  return 0;

}