// https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_h

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int N, S;
  cin >> N >> S;

  // solve
  long ans = 0;
  for (int i=1; i<=N; i++){
    if (i > S) break;
    ans += min(S-i, N); 
  }

  // output
  cout << ans << '\n';
  return 0;
  
}