// ABC318A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, m, p;
  cin >> n >> m >> p;

  // solve
  int ans = 0;
  for (int i=m; i<=n; i+=p) {
    ans++;
  }

  // output
  cout << ans << endl;
  return 0;

}