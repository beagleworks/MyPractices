// AGC004A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long a, b, c;
  cin >> a >> b >> c;

  // solve
  long long ans = 0;
  if (a%2 == 1 && b%2 == 1 && c%2 == 1) {
    ans = min({a*b, b*c, c*a});
  } 

  // output
  cout << ans << endl;
  return 0;

}