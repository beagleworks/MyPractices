// ABC068C(ARC079A)

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

  vector A(n, vector<int>());
  for (int i=0; i<m; i++) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    A[a].emplace_back(b);
    A[b].emplace_back(a);
  }

  // solve
  queue<int> q;
  q.emplace(0);
  vector<int> V(n, -1);
  V[0] = 0;
  while (!q.empty()) {
    int p = q.front();
    q.pop();
    for (auto d : A[p]) {
      if (V[d] == -1) {
        q.emplace(d);
        V[d] = V[p] + 1;
      }
    }
  }

  // output
  cout << (V[n-1] == 2 ? "POSSIBLE" : "IMPOSSIBLE") << endl;
  return 0;

}