// ABC152C

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

  vector<int> P(n);
  for (auto &p : P) cin >> p;

  // solve
  int ans = 0;
  int nmin = INF;
  for (auto p : P) {
    if (p < nmin) {
      ans++;
      nmin = p;
    }
  }

  // output
  cout << ans << endl;
  return 0;

}