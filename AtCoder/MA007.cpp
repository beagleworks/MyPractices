// https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_g

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  long N, X, Y;
  cin >> N >> X >> Y;

  // solve
  long ans = N/X + N/Y - N/lcm(X,Y);

  // output
  cout << ans << '\n';
  return 0;
  
}