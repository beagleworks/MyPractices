// ABC121A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int h, w, x, y;
  cin >> h >> w >> x >> y;

  // solve
  int ans = (h-x)*(w-y);

  // output
  cout << ans << endl;
  return 0;

}