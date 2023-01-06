// ABC054B

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
  vector<string> A(n), B(m);
  for (auto &a : A) cin >> a;
  for (auto &b : B) cin >> b;

  // solve
  bool ans = false;
  for (int i=0; i<=n-m; i++) {
    for (int j=0; j<=n-m; j++) {
      if (A[i][j] == B[0][0]) {

        bool f = true;
        for (int u=0; u<m; u++) {
          for (int v=0; v<m; v++) {
            if (A[i+u][j+v] != B[u][v]) {
              f = false;
              break;
            }
          }
          if (!f) break;
        }
        if (f) ans = true;
      }
    }
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}