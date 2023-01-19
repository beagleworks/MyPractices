// ABC133C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long l, r;
  cin >> l >> r;

  // solve
  long long ans = 2019;
  for (int i=0; i<=2019; i++) {
    for (int j=i+1; j<=2019; j++) {
      if (l+j > r) break;
      ans = min(((l+i)%2019*(l+j)%2019)%2019, ans);
    }
  }

  // output
  cout << ans << endl;
  return 0;

}