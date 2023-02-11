// ABC032C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, k;
  cin >> n >> k;

  vector<int> S(n);
  for (auto &s : S) cin >> s;

  // solve
  if (count(ALL(S), 0)) {
    cout << n << endl;
    return 0;
  }

  int64_t tmp = 1;
  int ans = 0;
  int right = 0;
  for (int left = 0; left < n; left++) {    
    while(right < n && tmp*S[right] <= k) {
      tmp *= S[right];
      right++;
    }

    ans = max(ans, right-left);
  
    if (right == left) right++;
    else tmp /= S[left];
  }

  // output
  cout << ans << endl;
  return 0;

}