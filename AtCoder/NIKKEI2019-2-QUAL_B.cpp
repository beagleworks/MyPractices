// NIKKEI2019-2-QUAL_B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;
  vector<int> D(n);
  int mx = 0;
  for (auto &d : D) {
    cin >> d;
    mx = max(d, mx);
  }

  // solve
  long long ans = 1;
  map<int, long long> mp;
  for (auto d : D) mp[d]++;
  if (D[0] != 0 || mp[0] > 1) {
    cout << 0 << endl;
    return 0;
  }

  long long pre = 1;
  for (int i=1; i<=mx; i++) {
    if (mp[i] == 0) {
      ans = 0;
      break;
    }
    long long q = 1;
    for (int j=0; j<mp[i]; j++) {
      q *= pre;
      q %= MOD;
    }
    ans *= q;
    ans %= MOD;
    pre = mp[i];
  }

  // output
  cout << ans << endl;
  return 0;

}