// ABC066A
// https://atcoder.jp/contests/abc066/tasks/abc066_a

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int a, b, c;
  cin >> a >> b >> c;

  // output
  cout << a+b+c-max({a,b,c}) << endl;
  return 0;
  
}