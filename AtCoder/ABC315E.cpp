// ABC315E

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
using Graph = vector<vector<int>>;
//constexpr int INF = 1009876543;
//constexpr long long LINF = 2211009988776543210LL;
//constexpr int MOD = 998244353;

queue<int> ans;

void dfs(Graph &G, vector<bool> &seen, int s){
  seen[s] = true;
  for (auto v : G[s]) {
    if (seen[v]) continue;
    dfs(G, seen, v);
  }
  ans.emplace(s);
}

int main(){

  // input
  int n;
  cin >> n;

  Graph V(n);
  for (int i=0; i<n; i++) {
    int c;
    cin >> c;
    for (int j=0; j<c; j++) {
      int p;
      cin >> p;
      p--;
      V[i].emplace_back(p);
    }
  }

  // solve
  vector<bool> seen(n, false);
  dfs(V, seen, 0);

  // output
  while (!ans.empty()) {
    auto v = ans.front();
    ans.pop();
    if (v+1 == 1) continue;
    cout << v+1 << ' ';
  }
  
  cout << endl;
  return 0;

}