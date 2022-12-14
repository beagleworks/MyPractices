// ABC139B
// https://atcoder.jp/contests/abc139/tasks/abc139_b

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
  int ans = 0, p = 1;
  while (p < b) {
    ans++;
    p += a-1;
  }

  // output
  cout << ans << endl;
  return 0;
  
}