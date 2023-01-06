// ABC153D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long h;
  cin >> h;

  // solve
  long long ans = 0, cnt = 1;
  while (h > 0) {
    h /= 2;
    ans += cnt;
    cnt *= 2;
  }

  // output
  cout << ans << endl;
  return 0;

}