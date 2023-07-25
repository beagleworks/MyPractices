// ABC295B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int r, c;
  cin >> r >> c;

  vector<string> B(r);
  for (auto &a : B) cin >> a;

  // solve
  for (int i=0; i<r; i++) {
    for (int j=0; j<c; j++) {
      if (B[i][j] != '.' && B[i][j] != '#') {
        int p = B[i][j] - '0';
        B[i][j] = '.';
        for (int k=0; k<r; k++) {
          for (int l=0; l<c; l++) {
            int len = abs(k-i) + abs(l-j);
            if (B[k][l] == '#' && len <= p) B[k][l] = '.';
          }
        }
      }
    }
  }

  // output
  for (auto s : B) cout << s << endl;
  return 0;

}