// ABC320E

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

  // solve
  vector<long> ans(n);
  priority_queue<int, vector<int>, greater<int>> q;
  // pair<long, int> => time, num 
  priority_queue<pair<long, int>, vector<pair<long, int>>, greater<pair<long, int>>> event;
  for (int i=0; i<n; i++) {
    q.emplace(i);
  }

  for (int i=0; i<m; i++) {
    long t, w, s;
    cin >> t >> w >> s;
    while(!event.empty()) {
      auto e = event.top();
      if (t >= e.first) {
        q.emplace(e.second);
        event.pop();
      }
      else break;
    }

    if (q.empty()) continue;
    auto p = q.top();
    q.pop();
    ans[p] += w;
    event.emplace(t+s, p);
  }

  // output
  for (auto x : ans) cout << x << "\n";
  return 0;

}