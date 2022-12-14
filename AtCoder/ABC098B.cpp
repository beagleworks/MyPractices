// ABC098B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n;
  string s;
  cin >> n >> s;

  // solve
  int ans = 0;
  for (int i=1; i<n; i++) {
    string s1 = s.substr(0, i), s2 = s.substr(i);
    set<char> ss1 = {ALL(s1)}, ss2 = {ALL(s2)}, ss3;
    set_intersection(ALL(ss1), ALL(ss2), inserter(ss3, ss3.end()));
    ans = max((int)ss3.size(), ans);
  }

  // output
  cout << ans << endl;
  return 0;

}