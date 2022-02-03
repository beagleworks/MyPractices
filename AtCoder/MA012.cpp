// https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_l
// long型素数判定

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  long N;
  cin >> N;

  // solve
  string ans = "Yes";
  for (long i=2; i*i<=N; i++){
    if (N % i == 0){
      ans = "No";
      break;
    }
  }

  // output
  cout << ans << '\n';
  return 0;

}