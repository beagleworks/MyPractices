// ABC098A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int a, b;
  cin >> a >> b;

  // solve
  int ans = max({a+b, a-b, a*b});

  // output
  cout << ans << endl;
  return 0;

}