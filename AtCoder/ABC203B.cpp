// ABC203B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n, k;
  cin >> n >> k;

  // solve
  int ans = k*n*(n+1)*50+n*k*(k+1)/2;

  // output
  cout << ans << endl;
  return 0;

}