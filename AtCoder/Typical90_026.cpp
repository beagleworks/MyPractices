// Typical90_026

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

  vector G(n, vector<int>());
  for (int i=0; i<n-1; i++) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    G[a].emplace_back(b);
    G[b].emplace_back(a);
  }

  // solve
  queue<int> q;
  vector<int> color(n, 0);
  q.emplace(0);
  color[0] = 1;
  vector<int> One, Two;
  while (!q.empty()) {
    int p = q.front();
    q.pop();
    for (auto g : G[p]) {
      if (color[g] == 0) {
        q.emplace(g);
        if (color[p] == 1){
          color[g] = 2;
          Two.emplace_back(g);
        }
        else {
          color[g] = 1;
          One.emplace_back(g);
        }       
      }
    }
  }

  auto ans = ((int)One.size() >= n/2 ? One : Two);  

  // output
  for (int i=0; i<n/2; i++) cout << ans[i]+1 << endl;
  return 0;

}