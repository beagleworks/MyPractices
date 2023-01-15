// ABC087B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int a, b, c, x;
  cin >> a >> b >> c >> x;

  // solve
  int ans = 0;
  for (int i=0; i<=a; i++) {
    for (int j=0; j<=b; j++) {
      for (int k=0; k<=c; k++) {
        if (500*i+100*j+50*k == x) ans++;
      }
    }
  }

  // output
  cout << ans << endl;
  return 0;

}