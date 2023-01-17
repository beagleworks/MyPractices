// Typical90_016

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long n, a, b, c;
  cin >> n >> a >> b >> c;

  // solve
  int ans = 9999;
  for (int i=0; i<10000; i++) {
    for (int j=0; i+j<10000; j++) {
      long long cx = a*i+b*j;
      int k;

      if (cx > n) break;
      if ((n-cx) % c == 0) {
        k = (n-cx) / c;
        ans = min(i+j+k, ans);
      }
    }
  }

  // output
  cout << ans << endl;
  return 0;

}