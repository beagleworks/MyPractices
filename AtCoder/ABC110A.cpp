// ABC110A
// https://atcoder.jp/contests/abc110/tasks/abc110_a

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
  cout << max({a,b,c})*9+a+b+c << endl;
  return 0;
  
}
