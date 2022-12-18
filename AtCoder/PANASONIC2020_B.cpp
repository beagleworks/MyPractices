// PANASONIC2020_B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int h, w;
  cin >> h >> w;

  // solve
  long long ans = (long long)h * w / 2;
  if (h % 2 == 1 && w % 2 == 1) ans++;
  if (h == 1 || w == 1) ans = 1;

  // output
  cout << ans << endl;
  return 0;

}