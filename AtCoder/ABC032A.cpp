// ABC032A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int a, b, n;
  cin >> a >> b >> n;

  // solve
  int ans;
  for (int i=n; true; i++) {
    if (i % a == 0 && i % b == 0) {
      ans = i;
      break;
    }
  }

  // output
  cout << ans << endl;
  return 0;

}