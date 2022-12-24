// ABC259A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, m, x, t, d;
  cin >> n >> m >> x >> t >> d;

  // output
  cout << (m >= x ? t : t-(x-m)*d) << endl;
  return 0;

}