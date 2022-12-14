// ABC280C

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
  int ans = s.size() + 1;
  for (int i=0; i<(int)s.size(); i++) {
    if (s[i] != t[i]) {
      ans = i+1;
      break;
    }
  }

  // output
  cout << ans << endl;
  return 0;

}