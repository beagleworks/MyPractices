// JSC2019-QUAL_A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int m, d;
  cin >> m >> d;

  // solve
  int ans = 0;
  for (int i=22; i<=d; i++) {
    if ((i/10)*(i%10) <= m && i%10 >= 2) {
      ans++;
    }
  }

  // output
  cout << ans << endl;
  return 0;

}