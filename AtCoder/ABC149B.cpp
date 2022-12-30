
#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long a, b, k;
  cin >> a >> b >> k;

  // solve
  if (a <= k) {
    k -= a;
    a = 0;
    b = max(b-k, 0LL);
  }
  else a -= k;

  // output
  cout << a << " " << b << endl;
  return 0;

}