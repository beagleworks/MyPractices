// ABC317E

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

constexpr int dh[4] = {-1, 0, 1, 0};
constexpr int dw[4] = {0, 1, 0, -1};

int main(){

  // input
  int h, w;
  cin >> h >> w;

  vector<string> field(h);
  for (auto &f : field) cin >> f;

  // solve
  pair<int, int> S, G;
  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      char c = field[i][j];
      if (c == 'S') S = {i, j};
      if (c == 'G') G = {i, j};
      if (c == '>') {
        for (int k=j+1; k<w; k++) {
          if (field[i][k] == '!') continue;
          if (field[i][k] == '.') field[i][k] = '!';
          else break;
        }
      }
      if (c == '<') {
        for (int k=j-1; k>=0; k--) {
          if (field[i][k] == '!') continue;
          if (field[i][k] == '.') field[i][k] = '!';
          else break;
        }
      }
      if (c == 'v') {
        for (int k=i+1; k<h; k++) {
          if (field[k][j] == '!') continue;
          if (field[k][j] == '.') field[k][j] = '!';
          else break;
        }
      }
      if (c == '^') {
        for (int k=i-1; k>=0; k--) {
          if (field[k][j] == '!') continue;
          if (field[k][j] == '.') field[k][j] = '!';
          else break;
        }
      }
    }
  }

  queue<pair<int, int>> q;
  vector len(h, vector<int>(w, INF));
  q.emplace(S);
  len[S.first][S.second] = 0;
  while (!q.empty()) {
    auto p = q.front();
    q.pop();
    for (int i=0; i<4; i++) {
      int hh = p.first+dh[i], ww = p.second+dw[i];
      if (hh < 0 || ww < 0 || hh >= h || ww >= w) continue;
      if (field[hh][ww] != '.' && field[hh][ww] != 'G') continue;
      
      if (len[hh][ww] != INF) continue;
      q.emplace(hh, ww);
      len[hh][ww] = len[p.first][p.second] + 1;
    }
  }

  // output
  if (len[G.first][G.second] == INF) cout << -1 << endl;
  else cout << len[G.first][G.second] << endl;

  // for (int i=0; i<h; i++) cout << field[i] << endl;
  return 0;

}