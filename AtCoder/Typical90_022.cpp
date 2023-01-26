// Typical90_022

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
  long long r = gcd(gcd(a, b), c);

  // output
  cout << (a/r-1) + (b/r-1) + (c/r-1) << endl;
  return 0;

}