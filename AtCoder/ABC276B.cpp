// ABC276B
// https://atcoder.jp/contests/abc276/tasks/abc276_b

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  // solve
  map<int, set<int>> V;
  for (int i=0; i<m; i++){
    int a, b;
    cin >> a >> b;
    V[a].insert(b);
    V[b].insert(a);
  }

  // output
  for (int i=1; i<=n; i++){
    if (V[i].size() == 0) cout << 0 << endl;
    else {
      cout << V[i].size() << " ";
      for (auto x: V[i]) cout << x << " ";
    }
  }
  
  return 0;
  
}
