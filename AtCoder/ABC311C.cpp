// ABC311C

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

  vector<int> A(n);
  for (auto &a : A) {
    cin >> a;
    a--;
  }

  // solve
  queue<int> ans;
  set<int> st;
  int cur = 0;

  while (true) {
    auto bef = st.size();
    st.emplace(cur);
    if (bef == st.size()) {
      // 解答
      while (true) {
        if (ans.front() != cur) ans.pop();
        else break;
      }

      cout << ans.size() << '\n';
      while(!ans.empty()) {
        cout << ans.front()+1 << '\n';
        ans.pop();
      }

      return 0;
    } 

    ans.emplace(cur);
    cur = A[cur];
  }

}