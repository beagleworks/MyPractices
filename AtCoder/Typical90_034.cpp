// Typical90_034

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

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  int ans = 0;
  int left = 0, right = 0;

  set<int> st;
  map<int, int> mp;
  while (left < n) {
    if ((int)st.size() <= k && right < n) {
      mp[A[right]]++;
      st.emplace(A[right]);
      right++;
      if ((int)st.size() <= k) ans = max(ans, right - left);
    }
    else {
      mp[A[left]]--;
      if (!mp[A[left]]) st.erase(A[left]);
      left++;
    }    
  }

  // output
  cout << ans << endl;
  return 0;

}