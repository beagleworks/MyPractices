// ABC269A
// https://atcoder.jp/contests/abc269/tasks/abc269_a

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
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  // solve
  int ans = (a+b)*(c-d);

  // output
  cout << ans << '\n';
  cout << "Takahashi" << '\n';
  return 0;
  
}