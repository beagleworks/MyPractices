// ABC297C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int h, w;
  cin >> h >> w;

  vector<string> S(h);
  for (auto &a : S) cin >> a;

  // solve
  for (int i=0; i<h; i++) {
    for (int j=0; j<w-1; j++) {
      if (S[i][j] == 'T' && S[i][j+1] == 'T') {
        S[i][j] = 'P';
        S[i][j+1] = 'C';
      }
    }
  }

  // output
  for (auto x : S) {
    for (auto z : x) {
      cout << z;
    }
    cout << endl;
  }
  return 0;

}