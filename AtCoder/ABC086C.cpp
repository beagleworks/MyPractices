// ABC086C(ARC089A)

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n;
  cin >> n;

  // solve
  int sx = 0, sy = 0, st = 0;
  for (int i=0; i<n; i++) {
    int t, x, y;
    cin >> t >> x >> y;

    int dd = abs(x-sx)+abs(y-sy);
    int dt = t - st;
    if (dt >= dd && (dt-dd)%2 == 0) {
      sx = x;
      sy = y;
      st = t;      
    }
    else {
      cout << "No" << endl;
      return 0;
    }
  }

  // output
  cout << "Yes" << endl;
  return 0;

}