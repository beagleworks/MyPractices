// YAHOO-PROCON2019-QUAL_C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long k, a, b;
  cin >> k >> a >> b;

  // solve
  long long ans = 0;
  ans = a + (b-a) * ((k-(a-1))/2);
  if ((k-(a-1))%2 == 1) ans++;
  ans = max(ans, 1+k);

  // output
  cout << ans << endl;
  return 0;

}