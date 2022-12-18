// ABC064A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int r, g, b;
  cin >> r >> g >> b;

  // solve
  int n = 100*r+10*g+b;

  // output
  cout << (n%4 == 0 ? "YES" : "NO") << endl;
  return 0;

}