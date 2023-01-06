// ABC153C

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

  vector<int> H(n);
  for (auto &h : H) cin >> h;

  // solve
  sort(ALL(H), greater<int>());
  long long ans = 0;
  for (int i=0; i<n; i++) {
    if (i >= k) ans += H[i];
  }

  // output
  cout << ans << endl;
  return 0;

}