// ABC108A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int k;
  cin >> k;

  // solve
  int ans;
  if (k % 2 == 0) ans = k*k/4;
  else ans = (k/2) * (k/2+1);

  // output
  cout << ans << endl;
  return 0;

}