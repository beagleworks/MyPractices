// AGC014A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int a, b, c;
  cin >> a >> b >> c;

  // solve
  int ans = 0;
  if (a % 2 || b % 2 || c % 2) ans = 0;
  else if (a == b && b == c) ans = -1;
  else {
    while (true) {
      int xa = b/2+c/2;
      int xb = c/2+a/2;
      int xc = a/2+b/2;
      a = xa, b = xb, c = xc;
      ans++;
      if (a % 2 || b % 2 || c % 2) break;
    }
  }

  // output
  cout << ans << endl;
  return 0;

}