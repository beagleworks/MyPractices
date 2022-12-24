// ABC057C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  long long n;
  cin >> n;

  // solve
  int ans = INF;

  for (long long i=1; i*i<=n; i++) {
    if (n%i == 0) {
      long long b = n/i;
      int bd = 0;
      while (b > 0) {
        b /= 10;
        bd++;
      }
      ans = min(ans, bd);
    }
  }

  // output
  cout << ans << endl;
  return 0;

}