// ABC297A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, d;
  cin >> n >> d;
  vector<int> T(n);
  for (auto &a : T) cin >> a;

  // solve
  int ans = -1;
  for (int i=1; i<n; i++) {
    if (T[i] - T[i-1] <= d) {
      ans = T[i];
      break;
    }
  }

  // output
  cout << ans << endl;
  return 0;

}