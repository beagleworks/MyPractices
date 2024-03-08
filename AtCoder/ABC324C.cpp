// ABC324C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  string t;
  cin >> n >> t;

  vector<string> S(n);
  for (auto &a : S) cin >> a;

  // solve
  int m = t.size();
  string tr = t;
  reverse(ALL(tr));

  vector<int> ans;
  auto good = [&ans](int idx){
    ans.emplace_back(idx);
    return;
  };
  
  for (int i=0; i<n; i++) {
    string s = S[i];
    int k = s.size();
    if (abs(k-m) > 1) continue;
    if (s == t) {
      good(i);
      continue;
    }
    string sr = s;
    reverse(ALL(sr));

    int cnt = 0;
    bool norm = true, rev = true;
    for (int j=0; j<min(m, k) && (norm || rev); j++) {
      if (norm && s[j] != t[j]) norm = false;
      if (rev && sr[j] != tr[j]) rev = false;
      cnt += norm + rev;
    }

    if ((k == m && cnt >= k-1) || (k == m-1 && cnt >= k) || (k == m+1 && cnt >= m)) good(i);
  }

  // output
  cout << ans.size() << endl;
  for (auto x : ans) cout << x+1 << " ";
  cout << endl;
  return 0;

}