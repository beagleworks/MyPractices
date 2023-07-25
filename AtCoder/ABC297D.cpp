// ABC297D

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
  if (a < b) swap(a, b);

  // solve
  long long ans = 0;
  auto f = [&](long long x, long long y, auto self){
    if (x == y) return;
    if (y == 0) {
      ans--;
      return;
    }
    ans += x / y;
    self(y, x%y, self);
  };
  
  f(a, b, f);

  // output
  cout << ans << endl;
  return 0;

}