// ABC051C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int sx, sy, tx, ty;
  cin >> sx >> sy >> tx >> ty;

  // solve
  string re = string(abs(tx-sx), 'R'); 
  string ue = string(abs(ty-sy), 'U');
  string le = string(abs(tx-sx), 'L');
  string de = string(abs(ty-sy), 'D');
  string ans = re + ue + le + de + "D" + re + "RU" + ue + "LU" + le + "LD" + de + "R";

  // output
  cout << ans << endl;
  return 0;

}