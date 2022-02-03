// https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_n
// long型素因数分解

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
  for (long i=2; i*i<=N; i++){
    if (N % i == 0){
      while (N % i == 0){
        cout << i << ' ';
        N /= i;
      }      
    }
  }

  // 最後に残った数も素数
  if (N != 1){
    cout << N << '\n';
  }

  return 0;

}