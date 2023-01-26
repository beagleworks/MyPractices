// ABC046B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, k;
  cin >> n >> k;

  // solve
  long long ans = k;
  for (int i=1; i<n; i++) {
    ans *= (k-1);
  }

  // output
  cout << ans << endl;
  return 0;

}