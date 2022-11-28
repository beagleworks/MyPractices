// ABC279A
// https://atcoder.jp/contests/abc279/tasks/abc279_a

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  string s;
  cin >> s;

  // solve
  int ans = 0;
  for (auto c: s){
    if (c == 'v') ans++;
    else ans += 2;
  }

  // output
  cout << ans << endl;
  return 0;
  
}
