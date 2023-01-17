// ABC083B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, a, b;
  cin >> n >> a >> b;

  // solve
  int ans = 0;
  for (int i=1; i<=n; i++) {
    int m = i, cnt = 0;
    while (m > 0) {
      cnt += m%10;
      m /= 10;
    }
    if (a <= cnt && cnt <= b) ans += i;
  }

  // output
  cout << ans << endl;
  return 0;

}