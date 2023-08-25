// ABC304C

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

  vector<pair<int, int>> V(n);
  for (int i=0; i<n; i++) {
    int x, y;
    cin >> x >> y;
    V[i] = {x, y};
  }

  // solve
  vector<bool> positive(n, false);
  stack<int> st;
  st.emplace(0);
  positive[0] = true;
  while (!st.empty()) {
    auto p = st.top();
    st.pop();
    for (int i=0; i<n; i++) {
      if (positive[i]) continue;
      if ((V[p].first - V[i].first)*(V[p].first - V[i].first) + (V[p].second - V[i].second)*(V[p].second - V[i].second) <= d*d) {
        positive[i] = true;
        st.emplace(i);
      }
    }
  }

  // output
  for (auto x : positive) {
    cout << (x ? "Yes" : "No") << '\n';
  }

  return 0;

}