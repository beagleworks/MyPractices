// ABC144C

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
  long long ans = n - 1;  
  for (long long i=2; i*i<=n; i++) {
    if (n%i == 0) {
      ans = i + n/i -2;
    }
  }

  // output
  cout << ans << endl;
  return 0;

}