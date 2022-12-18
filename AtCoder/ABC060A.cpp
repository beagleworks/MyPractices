// ABC060A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  string a, b, c;
  cin >> a >> b >> c;

  // output
  cout << (a.back() == b[0] && b.back() == c[0] ? "YES" : "NO") << endl;
  return 0;

}