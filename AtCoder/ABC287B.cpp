// ABC287B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  // solve
  int ans = 0;

  vector<string> v;
  for (int i=0; i<n; i++) {
    string s;
    cin >> s;
    v.emplace_back(s.substr(3));
  }

  set<string> st;
  for (int i=0; i<m; i++) {
    string t;
    cin >> t;
    st.emplace(t);
  }

  for (auto e : v) {
    if (count(ALL(st), e)) ans++;
  }

  // output
  cout << ans << endl;
  return 0;

}