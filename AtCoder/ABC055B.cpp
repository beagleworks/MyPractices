// ABC055B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;
constexpr int MOD2 = 7 + 1e9;

int main(){

  // input
  int n;
  cin >> n;

  // solve
  long long ans = 1;
  for (long long i=1; i<=n; i++) {
    ans = (ans * i) % MOD2;
  }

  // output
  cout << ans << endl;
  return 0;

}