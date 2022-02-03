// https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_m
// long型約数列挙

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  long N;
  cin >> N;

  // solve & output
  for (long i=1; i*i<=N; i++){
    if (N % i == 0){
      if (i*i == N){
        cout << i << '\n';
      }
      else {
        cout << i << '\n' << N/i << '\n';
      }
    }
  }

  return 0;

}