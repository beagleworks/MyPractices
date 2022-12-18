// ABC191A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int v, t, s, d;
  cin >> v >> t >> s >> d;

  // output
  cout << ((d < v*t || v*s < d) ? "Yes" : "No" ) << endl;
  return 0;

}