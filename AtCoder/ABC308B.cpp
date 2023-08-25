// ABC308B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  vector<string> C(n);
  for (auto &a : C) cin >> a;

  vector<string> D(m);
  for (auto &a : D) cin >> a;

  int p0;
  cin >> p0;

  vector<int> P(m);
  for (auto &a : P) cin >> a;

  // solve
  map<string, int> mp;
  for (int i=0; i<m; i++) {
    mp[D[i]] = P[i];
  }

  int ans = 0;
  for (int i=0; i<n; i++) {
    if (!mp[C[i]]) ans += p0;
    else ans += mp[C[i]];
  }

  // output
  cout << ans << endl;
  return 0;

}