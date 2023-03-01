// ABC151D

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

  vector<string> field(h);
  for (int i=0; i<h; i++) cin >> field[i];

  // solve
  constexpr int dy[4] = {-1, 0, 1, 0};
  constexpr int dx[4] = {0, 1, 0, -1};

  int sy, sx;
  int ans = 0;
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) {
    if (field[i][j] == '.') {
      sy = i, sx = j;

      queue<pair<int,int>> q;
      vector visited(h, vector(w, -1));
      q.emplace(sy, sx);
      visited[sy][sx] = 0;
      pair<int, int> memo;
      while (!q.empty()) {
        auto p = q.front();
        q.pop();
        memo = {p.first, p.second};
        for (int i=0; i<4; i++) {
          int Y = p.first + dy[i];
          int X = p.second + dx[i];
          if (Y < 0 || X < 0 || Y >= h || X >= w) continue;
          if (field[Y][X] == '#') continue;
          if (visited[Y][X] == -1) {
            visited[Y][X] = visited[p.first][p.second] + 1;
            q.emplace(Y, X);
          }
        }
      }
      ans = max(ans, visited[memo.first][memo.second]);
    }
  }

  // output
  cout << ans << endl;
  return 0;

}