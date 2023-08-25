// ABC312B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

constexpr int dy[] = {0, 0, 0, 1, 1, 1, 2, 2, 2, 6, 6, 6, 7, 7, 7, 8, 8, 8};
constexpr int dx[] = {0, 1, 2, 0, 1, 2, 0, 1, 2, 6, 7, 8, 6, 7, 8, 6, 7, 8};
constexpr int ddy[] = {0, 1, 2, 3, 3, 3, 3, 5, 5, 5, 5, 6, 7, 8};
constexpr int ddx[] = {3, 3, 3, 3, 2, 1, 0, 8, 7, 6, 5, 5, 5, 5};


int main(){

  // input
  int n, m;
  cin >> n >> m;

  vector<string> Field(n);
  for (auto &a : Field) cin >> a;

  // solve
  for (int i=0; i+8<n; i++) {
    for (int j=0; j+8<m; j++) {
      bool f = true;
      for (int k=0; k<16; k++) {
        if (Field[i+dy[k]][j+dx[k]] != '#') f = false;
      }      
      for (int k=0; k<14; k++) {
        if (Field[i+ddy[k]][j+ddx[k]] != '.') f = false;
      }
      if (f) {
        cout << i+1 << " " << j+1 << '\n';
      }
    }
  }

  return 0;

}