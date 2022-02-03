// https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_j
// 階乗(N=20まで)

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int N;
  cin >> N;

  // solve
  long ans = 1;
  for (int i=1; i<=N; i++){
    ans *= i;
  }

  // output
  cout << ans << '\n';
  return 0;
  
}