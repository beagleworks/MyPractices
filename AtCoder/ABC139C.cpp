// ABC139C

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

  vector<int> H(n);
  for (auto &h : H) cin >> h;

  // solve
  int ans = 0, cnt = 0;
  for (int i=1; i<n; i++) {
    if (H[i-1] >= H[i]) cnt++;
    else {
      ans = max(cnt, ans);
      cnt = 0;
    }
  }
  ans = max(cnt, ans);

  // output
  cout << ans << endl;
  return 0;

}