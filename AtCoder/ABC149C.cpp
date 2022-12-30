// ABC149C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int x;
  cin >> x;

  // solve
  int ans;
  for (int i=0; i<100000; i++) {
    ans = x+i;
    bool f = true;
    for (int j=2; j*j<=ans; j++) {
      if (ans%j == 0) {
        f = false;
        break;
      }
    }
    if (f) break;
  }

  // output
  cout << ans << endl;
  return 0;

}