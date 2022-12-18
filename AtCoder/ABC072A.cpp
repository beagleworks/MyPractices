// ABC072A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int x, t;
  cin >> x >> t;

  // solve
  int ans = max(x-t, 0);

  // output
  cout << ans << endl;
  return 0;

}