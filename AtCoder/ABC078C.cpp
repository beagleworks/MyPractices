// ABC078C(ARC085A)
// https://atcoder.jp/contests/abc078/tasks/arc085_a

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  // output
  cout << (1900*m+100*(n-m))*(1<<m) << endl;
  return 0;
  
}