// ABC100B
// https://atcoder.jp/contests/abc100/tasks/abc100_b

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int d, n;
  cin >> d >> n;

  // solve
  auto f = [](long long x, long long y){
    long long ret = 1;
    for (int i=0; i<y; i++) ret *= x;
    return ret;
  };

  cout << (n == 100 ? (n+1)*f(100, d) : n*f(100, d)) << endl;
  return 0;
  
}