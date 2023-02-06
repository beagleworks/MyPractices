// ABC128C

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

  vector S(n, vector<int>());
  for (int i=0; i<m; i++) {
    int k;
    cin >> k;
    for (int j=0; j<k; j++) {
      int s;
      cin >> s;
      s--;
      S[s].emplace_back(i);
    }
  }

  vector<int> P(m);
  for (auto &p : P) cin >> p;

  // solve
  int ans = 0;

  for (int bit=0; bit<(1<<n); bit++) {
    vector<int> ON(m);
    for (int i=0; i<n; i++) {
      if (bit & (1<<i)) {
        for (auto s : S[i]) {
          ON[s]++;
        }
      }
    }
    bool f = true;
    for (int i=0; i<m; i++) {
      if (ON[i] % 2 != P[i]) f = false;
    }
    if (f) ans++;
  }

  // output
  cout << ans << endl;
  return 0;

}