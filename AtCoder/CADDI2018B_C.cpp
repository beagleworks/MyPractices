// CADDI2018B_C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

// pow
template<typename T, typename U> T myPow(T a, U b) {
  T ret = a;
  for (U i = 1; i < b; i++) ret *= a; 
  return ret;
}

int main(){

  // input
  long long n, p;
  cin >> n >> p;

  // solve
  if (n == 1) {
    cout << p << endl;
    return 0;
  }

  map<long long, int> mp;
  for (long long i=2; i*i<=p; i++) {
    if (p % i == 0) {
      while (p % i == 0) {
        p /= i;
        mp[i]++;
      }
    }
  }

  // output
  long long ans = 1;
  for (auto [i, v] : mp) {
    if (v >= n) ans *= myPow(i, v/n);
  }
  cout << ans << endl;
  return 0;

}