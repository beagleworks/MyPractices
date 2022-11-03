// ABC268B
// https://atcoder.jp/contests/abc268/tasks/abc268_b

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 1e9 + 7;
const long long LINF = 1e18;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  string s, t;
  cin >> s >> t;

  // solve
  string u = t.substr(0, s.size());

  // output
  if (s == u) cout << "Yes" << '\n';
  else cout << "No" << '\n';
  return 0;
  
}