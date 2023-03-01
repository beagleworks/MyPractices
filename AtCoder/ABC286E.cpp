// ABC286E

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 1e17;
constexpr int MOD = 998244353;
constexpr int64_t K = 1e12;

int main(){

  // input
  int n;
  cin >> n;

  vector<int> A(n);
  vector D(n, vector<int64_t>(n, LINF));
  for (auto &a : A) cin >> a;

  for (int i=0; i<n; i++) {
    string s;
    cin >> s;
    for (int j=0; j<n; j++) {
      if (s[j] == 'Y') {
        D[i][j] = K-A[j];
      }
      else if (i==j) D[i][j] = 0;
    }
  }

  int q;
  cin >> q;

  // solve
  
  // dは2点間距離
  vector dist(n, vector<int64_t>(n, LINF));
  for (int k = 0; k < n; k++) {    // 経由する頂点
    for (int i = 0; i < n; i++) {   // 開始頂点
      for (int j = 0; j < n; j++) { // 終端
        D[i][j] = min(D[i][j], D[i][k] + D[k][j]);
      }
    }
  }

  for (int i=0; i<q; i++){
    int u, v;
    cin >> u >> v;
    u--, v--;

    if (D[u][v] > 1e16) cout << "Impossible" << endl;
    
    else {
      int r = (K+D[u][v]-1)/K;
      cout << r << " " << K*r - D[u][v] + A[u] << endl;
    }
  }

  return 0;

}