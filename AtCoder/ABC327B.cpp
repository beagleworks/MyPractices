// ABC327B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

template<typename T, typename U> T myPow(T a, U b) {
  T ret = a;
  for (U i = 1; i < b; i++) ret *= a; 
  return ret;
}

int main(){

  // input
  long b;
  cin >> b;

  // solve
  int ans = -1;
  for (long i=1; i<=15; i++) {
    if (myPow(i, i) == b) ans = i;
  }

  // output
  cout << ans << endl;
  return 0;

}