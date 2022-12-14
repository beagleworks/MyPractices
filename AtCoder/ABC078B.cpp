// ABC078B
// https://atcoder.jp/contests/abc078/tasks/abc078_b

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int x, y, z;
  cin >> x >> y >> z;

  // output
  cout << (x-z)/(y+z) << endl;
  return 0;
  
}
