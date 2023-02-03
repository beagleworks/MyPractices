// Typical90_038

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long a, b;
  cin >> a >> b;

  // solve
  long long d = gcd(a, b);
  if (b / d > 1000000000000000000LL / a) cout << "Large" << endl;
  else  cout << lcm(a, b) << endl;
  return 0;

}