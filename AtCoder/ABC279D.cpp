// ABC279D
// https://atcoder.jp/contests/abc279/tasks/abc279_d

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  long long A, B;
  cin >> A >> B;

  // solve
  // f(x) = Bx+A(x+1)^(-1/2)
  // f'(x) = B-(1/2)A(x+1)^(-3/2)
  // 極値f'(x) = 0 は x = (A/2B)^(2/3) - 1

  double xd = pow(A/(2*B), 2.0/3.0) - 1;
  long long xx = xd;
  auto calc = [=](long long x){
    return B*x+A/sqrt((x+1));
  };

  double ans = min({calc(xx), calc(xx+1), (double)A});
  
  // output
  printf("%.10f\n", ans);
  return 0;
  
}

// 別解
// 三分探索