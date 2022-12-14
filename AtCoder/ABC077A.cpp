// ABC077A
// https://atcoder.jp/contests/abc077/tasks/abc077_a

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

  // output
  cout << (string("")+s[2]+s[1]+s[0] == t ? "YES" : "NO") << endl;
  return 0;
  
}
