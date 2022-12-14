// ABC139A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  string s, t;
  cin >> s >> t;

  // solve
  int ans = 0;
  for (int i=0; i<3; i++) {
    if (s[i] == t[i]) ans++;
  }

  // output
  cout << ans << endl;
  return 0;

}