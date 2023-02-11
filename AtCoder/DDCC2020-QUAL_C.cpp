// DDCC2020-QUAL_C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int h, w, k;
  cin >> h >> w >> k;

  vector<string> S(h);
  for (auto &s : S) cin >> s;

  // solve
  vector owner(h, vector<int>(w, 0));
  int cnt = 0;
  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      if (S[i][j] == '#') owner[i][j] = ++cnt;
    }
  }

  for (int i=0; i<h; i++) {
    int now = 0;
    for (int j=0; j<w; j++) {
      if (owner[i][j] != 0) now = owner[i][j];
      else owner[i][j] = now;
    }
  }

  for (int i=0; i<h; i++) {
    int now = 0;
    for (int j=w-1; j>=0; j--) {
      if (owner[i][j] != 0) now = owner[i][j];
      else owner[i][j] = now;
    }
  }

  for (int j=0; j<w; j++) {
    int now = 0;
    for (int i=0; i<h; i++) {
      if (owner[i][j] != 0) now = owner[i][j];
      else owner[i][j] = now;
    }
  }

  for (int j=0; j<w; j++) {
    int now = 0;
    for (int i=h-1; i>=0; i--) {
      if (owner[i][j] != 0) now = owner[i][j];
      else owner[i][j] = now;
    }
  }

  // output
  for (auto x : owner) {
    for (auto p : x) {
      cout << p << " ";
    }
    cout << '\n';
  }
  return 0;

}