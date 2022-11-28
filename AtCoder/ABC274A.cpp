// ABC274A
// https://atcoder.jp/contests/abc274/tasks/abc274_a

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  double a, b;
  cin >> a >> b;

  // solve
  double ans = b/a;

  // output
  printf("%.3f\n", ans);
  return 0;
  
}
