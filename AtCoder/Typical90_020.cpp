// Typical90_020

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
  auto upow = [](long long x, long long y) {
    long long ret = 1;
    for (int i=0; i<y; i++) {
      ret *= x;
    }
    return ret;
  };
  
  long long ans = a < upow(c, b);

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}