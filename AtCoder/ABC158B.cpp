// ABC158B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long n, a, b;
  cin >> n >> a >> b;

  // solve
  long long ans = 0;
  long long un = n/(a+b), rest = n%(a+b);
  ans = a*un;
  if (rest >= a) ans += a;
  else ans += rest;

  // output
  cout << ans << endl;
  return 0;

}