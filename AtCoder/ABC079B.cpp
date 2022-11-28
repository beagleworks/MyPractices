// ABC079B
// https://atcoder.jp/contests/abc079/tasks/abc079_b

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int n;
  cin >> n;

  // solve
  long long ans = 0;
  long long b1 = 1L, b2 = 2L;
  if (n == 0) ans = b2;
  else if (n == 1) ans = b1;
  for (int i=2; i<=n; i++){
    ans = b1 + b2;
    b2 = b1;
    b1 = ans;
  }

  // output
  cout << ans << '\n';
  return 0;
  
}