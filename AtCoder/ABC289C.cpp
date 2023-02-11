// ABC289C

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

  vector<set<int>> S(m);
  for (int i=0; i<m; i++) {
    int c;
    cin >> c;
    for (int j=0; j<c; j++) {
      int a;
      cin >> a;
      S[i].emplace(a);
    }
  }

  // solve
  int ans = 0;
  for (int bit=0; bit<(1<<m); bit++) {
    set<int> st;
    for (int i=0; i<m; i++) {
      if (bit & (1<<i)) {
        st.insert(ALL(S[i]));
      }
    }
    if ((int)st.size() == n) ans++;
  }

  // output
  cout << ans << endl;
  return 0;

}