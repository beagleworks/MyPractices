#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 1e9 + 7;
const long long LINF = 1e18;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int N, M;
  cin >> N >> M;

  // solve
  vector Adj(N, vector(N, false));
  for (int i=0; i<M; i++){
    int a, b;
    cin >> a >> b;
    Adj[a-1][b-1] = true;
  }

  int ans = 0;
  for (int i=0; i<N; i++) for (int j=i+1; j<N; j++) for(int k=j+1; k<N; k++){
    if (Adj[i][j] && Adj[j][k] && Adj[i][k]) ans++;
    
  }

  // output
  cout << ans << '\n';
  return 0;
  
}