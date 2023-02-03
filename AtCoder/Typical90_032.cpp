// Typical90_032

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

  vector A(n, vector<int>(n));
  for (auto &a : A) for (auto &e : a) cin >> e;

  int m;
  cin >> m;
  
  vector R(n, vector(n, true));
  for (int i=0; i<m; i++) {
    int x, y;
    cin >> x >> y;
    x--, y--;
    R[x][y] = false;
    R[y][x] = false;
  }

  // solve
  int ans = INF;
  vector<int> V(n);
  iota(ALL(V), 0);
  do{
    int t = 0;
    bool f = true;
    for(int i=0; i<n; i++) {
      t += A[V[i]][i];
      if (i < n-1 && !R[V[i]][V[i+1]]) f = false;
    }
    
    if (f) ans = min(ans, t);
  }
  while(next_permutation(ALL(V)));

  // output
  cout << (ans < INF ? ans : -1) << endl;
  return 0;

}