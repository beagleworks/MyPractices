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
  int y;
  cin >> y;

  // solve
  int ans = (y/4)*4 + 2;
  if (ans < y) ans += 4;

  // output
  cout << ans << '\n';
  return 0;
  
}