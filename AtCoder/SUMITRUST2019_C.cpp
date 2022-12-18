// SUMITRUST2019_C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int x;
  cin >> x;

  // solve
  int p = x / 100, q = x % 100;
  bool ans = false;
  while (p > 0) {
    p--;
    if (q <= 5) {
      ans = true;
      break;
    }
    q -= 5;
  }

  // output
  cout << ans << endl;
  return 0;

}