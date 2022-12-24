// ABC096B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int a, b, c, k;
  cin >> a >> b >> c >> k;

  // solve
  int m = max({a,b,c}), rest = a+b+c-m;
  int ans = rest+m*pow(2,k);

  // output
  cout << ans << endl;
  return 0;

}