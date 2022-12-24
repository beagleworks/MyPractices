// ABC273B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  long long x;
  int k;
  cin >> x >> k;

  // solve
  long long ans = 0;
  for (int i=0; i<k; i++) {
    int z = x % 10;
    x /= 10;
    if (z >= 5) x++;
  }

  if (x) ans = x * powl(10, k);

  // output
  cout << ans << endl;
  return 0;

}