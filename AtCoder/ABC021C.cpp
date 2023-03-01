// ABC021C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 1000000007;

int main(){

  // input
  int n, a, b, m;
  cin >> n >> a >> b >> m;
  a--, b--;

  vector E(n, vector<int>());
  for (int i=0; i<m; i++) {
    int x, y;
    cin>> x >> y;
    x--, y--;
    E[x].emplace_back(y);
    E[y].emplace_back(x);
  }

  // solve
  queue<int> q;
  vector<int> len(n, -1);
  vector<int64_t> cnt(n, 0);
  q.emplace(a);
  len[a] = 0;
  cnt[a] = 1;
  while(!q.empty()) {
    int p = q.front();
    q.pop();
    for (auto x : E[p]) {
      if (len[x] == -1) {
        q.emplace(x);
        len[x] = len[p] + 1;
        cnt[x] = cnt[p];
      }
      else if (len[x] == len[p] + 1) {
        cnt[x] += cnt[p];
        cnt[x] %= MOD;
      }
    }
  }

  // output
  cout << cnt[b] << endl;
  return 0;

}