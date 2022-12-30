// ABC127B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int r, d, x;
  cin >> r >> d >> x;

  // solve
  int ans = x;
  for (int i=0; i<10; i++) {
    ans = r*ans - d;
    cout << ans << endl;
  }

  return 0;

}