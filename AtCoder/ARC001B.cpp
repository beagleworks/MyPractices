// ARC001B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int a, b;
  cin >> a >> b;
  if (a > b) swap(a, b);

  // solve
  int ans = INF;
  for (int i=-4; i<=4; i++) {
    for (int j=-1; j<=1; j++) {
      for (int k=0; k<=4; k++) {
        if (a+i+5*j+10*k == b) ans = min(ans, abs(i)+abs(j)+k);
      }
    }
  }

  // output
  cout << ans << endl;
  return 0;

}