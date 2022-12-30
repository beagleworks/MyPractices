// ABC148E

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long n;
  cin >> n;

  // solve
  long long ans = 0;
  if (n%2 == 0) {
    n /= 2;
    while(n > 0) {
      ans += n/5;
      n /= 5;
    }
  }

  // output
  cout << ans << endl;
  return 0;

}