// https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_k
// 素数列挙

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int N;
  cin >> N;

  // solve & output
  for (int i=2; i<=N; i++){
    bool f = true;
    for (int x=2; x*x<=i; x++){
      if (i % x == 0){
        f = false;
        break;
      }
    }

    if (f){
      cout << i << " ";
    }
  }

  return 0;

}