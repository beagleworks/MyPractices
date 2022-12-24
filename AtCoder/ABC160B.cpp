// ABC160B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int x;
  cin >> x;

  // solve
  int ans = (x / 500) * 1000 + ((x % 500) / 5) * 5;

  // output
  cout << ans << endl;
  return 0;

}