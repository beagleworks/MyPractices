// AGC011A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, c, k;
  cin >> n >> c >> k;

  vector<int> T(n);
  for (auto &t : T) cin >> t;

  // solve
  sort(ALL(T));
  int ans = 0;
  int cnt = 0, lim = 0;
  for (int i=0; i<n; i++) {
    if (lim+k < T[i] || cnt == 0) {
      if (cnt) ans++;
      cnt = 1;
      lim = T[i];
    }
    else {
      cnt++;
    }
    
    if (cnt == c) {
      ans++;
      cnt = 0;
    }
  }
  
  if (cnt >= 1) ans++;

  // output
  cout << ans << endl;
  return 0;

}