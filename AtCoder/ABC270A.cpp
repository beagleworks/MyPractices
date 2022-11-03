// ABC270A
// https://atcoder.jp/contests/abc270/tasks/abc270_a

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
  int a, b;
  cin >> a >> b;

  // solve
  int ans = 0;
  if (a >= 4 || b >= 4){
    ans += 4;
    a %= 4;
    b %= 4;
  }

  if (a+b == 3) ans += 3;
  else ans += max(a, b);

  // output
  cout << ans << '\n';
  return 0;
  
}

// model
// cout << (a|b) << '\n';
