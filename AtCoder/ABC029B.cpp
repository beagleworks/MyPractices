// ABC029B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  vector<string> S(12);
  for (auto &s : S) cin >> s;

  // solve
  int ans = 0;
  for (auto s : S) {
    for (auto c : s) {
      if (c == 'r') {
        ans++;
        break;
      }
    }
  }

  // output
  cout << ans << endl;
  return 0;

}