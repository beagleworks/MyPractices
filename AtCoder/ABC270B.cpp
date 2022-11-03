// ABC270B
// https://atcoder.jp/contests/abc270/tasks/abc270_b

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 1e9 + 7;
const long long LINF = 1e18;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int x, y, z;
  cin >> x >> y >> z;

  // solve
  int ans;
  if (abs(x) < abs(y) || x*y < 0) ans = abs(x);
  else if (abs(z) < abs(y) || z*y < 0) ans = abs(z) + abs(x-z);
  else ans = -1;

  // output
  cout << ans << '\n';
  return 0;
  
} 