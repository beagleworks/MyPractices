// https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_c

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
  int ans = 0;
  for (int i=0; i<N; i++){
    int a;
    cin >> a;
    ans += a;
  }

  // output
  cout << ans << '\n';
  return 0;
  
}