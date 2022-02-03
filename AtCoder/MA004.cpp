// https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_d

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int A1, A2, A3;
  cin >> A1 >> A2 >> A3;

  // solve
  long ans = A1*A2*A3;

  // output
  cout << ans << '\n';
  return 0;
  
}