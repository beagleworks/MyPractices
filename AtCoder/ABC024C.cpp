// ABC024C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, d, K;
  cin >> n >> d >> K;
  vector<pair<int, int>> LR(d), MIG(K);
  for (auto &a : LR) {
    int l, r;
    cin >> l >> r;
    a = {l-1, r-1};
  }
  for (auto &m : MIG) {
    int s, t;
    cin >> s >> t;
    m = {s-1, t-1};
  }

  // solve
  for (int i=0; i<K; i++) {
    auto [s, t] = MIG[i];
    for (int j=0; j<d; j++) {
      auto [l, r] = LR[j];
      if (l <= s && s <= r) {
        if (l <= t && t <= r) {
          cout << j+1 << endl;
          break;
        }
        else s = (s < t) ? r : l;
      }
    }
  }

  return 0;

}