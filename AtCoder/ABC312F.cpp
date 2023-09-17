// ABC312F

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  vector<int> T0, T1, T2;
  for (int i=0; i<n; i++) {
    int t, x;
    cin >> t >> x;
    if (t == 0) T0.emplace_back(x);
    else if (t == 1) T1.emplace_back(x);
    else T2.emplace_back(x);
  }

  // solve
  sort(ALL(T0), greater()), sort(ALL(T1), greater()), sort(ALL(T2), greater());

  vector<long> dp(n, 0);
  int cnt = 0;
  long key = 0;
  int t0 = 0, t1 = 0, t2 = 0;
  while (cnt < m) {
    if (t0 < (int)T0.size()) {
      dp[0] += T0[t0++];
    }
    else if (!key && t2 < (int)T2.size()) {
      key += T2[t2++];
    }
    else if (t1 < (int)T1.size()){
      if (key) {
        dp[0] += T1[t1];
        key--;
      }
      t1++;
    }
    else {
      key += T2[t2++];
    }
    cnt++;
  }

  int k = t0;
  for (int i=0; i<k; i++) {
    if (t1 == (int)T1.size() && (int)t2 == T2.size()) break;
    if (!key && t2 < (int)T2.size()) {
      key += T2[t2++];
      dp[i+1] = dp[i] - T0[--t0];
    }
    else if (t1 < (int)T1.size()){
      if (key) {
        dp[i+1] += dp[i] + T1[t1] - T0[--t0];
        key--;
      }
      else {
        dp[i+1] = dp[i] - T0[--t0];
      }
      t1++;
    }
    else {
      key += T2[t2++];
      dp[i+1] = dp[i] - T0[--t0];
    }
  }

  // output
  cout << *max_element(ALL(dp)) << endl;
  return 0;

}