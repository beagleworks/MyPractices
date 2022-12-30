// ABC142B

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
  for (int i=0; i<n; i++) {
    int h;
    cin >> h;
    if (h >= k) ans++;
  }

  // output
  cout << ans << endl;
  return 0;

}