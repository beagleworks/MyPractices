// ABC053C(ARC068A)

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long x;
  cin >> x;

  // solve
  long long ans;
  if (x % 11 == 0) ans = (x/11)*2;
  else if (x % 11 <= 6) ans = (x/11)*2+1;
  else ans = (x/11)*2+2;


  // output
  cout << ans << endl;
  return 0;

}