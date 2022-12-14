// ABC156B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, k;
  cin >> n >> k;

  // solve
  int ans = 0;
  while (n > 0) {
    n /= k;
    ans++;
  }

  // output
  cout << ans << endl;
  return 0;

}