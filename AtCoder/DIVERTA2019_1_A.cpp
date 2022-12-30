// DIVERTA2019_1_A

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
  int ans = 0;
  for (int i=1; i+k-1<=n; i++) {
    ans++;
  }

  // output
  cout << ans << endl;
  return 0;

}