// ABC078A
// https://atcoder.jp/contests/abc078/tasks/abc078_a

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  char x, y;
  cin >> x >> y;

  // output
  cout << (x < y ? "<" : x > y ? ">" : "=")  << endl;
  return 0;
  
}
