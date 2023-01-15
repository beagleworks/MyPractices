// ABC273C

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

  map<int, int> mp;
  int mx = 0;
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    mp[a]++;
    mx = max(a, mx);
  }

  // solve
  vector<int> ans;
  for (auto m : mp) {
    ans.emplace_back(m.second);
  }

  // output
  reverse(ALL(ans));
  for (int i=0; i<n; i++) {
    if (i >= (int)ans.size()) cout << 0 << endl;
    else cout << ans[i] << endl;
  }
  return 0;

}