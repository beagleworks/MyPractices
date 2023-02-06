// ARC005C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

constexpr int dy[4] = {-1, 0, 1, 0};
constexpr int dx[4] = {0, 1, 0, -1};

int main(){

  // input
  int h, w;
  cin >> h >> w;

  vector field(h, vector<char>(w));
  int sy, sx, gy, gx;
  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      char c;
      cin >> c;
      field[i][j] = c;
      if (c == 's') {
        sy = i, sx = j;
      }
      if (c == 'g') {
        gy = i, gx = j;
      }
    }
  }


  // solve
  vector visited(h, vector(w, -1));
  deque<pair<int, int>> q;
  q.emplace_back(sy, sx);
  visited[sy][sx] = 0;
  while(!q.empty()) {
    auto p = q.front();
    q.pop_front();
    int y = p.first, x = p.second;
    for (int i=0; i<4; i++) {
      int Y = y+dy[i], X = x+dx[i];
      if (Y < 0 || Y >= h || X < 0 || X >= w) continue;
      if (visited[Y][X] == -1) {
        visited[Y][X] = visited[y][x];
        if (field[Y][X] != '#') q.emplace_front(Y, X);
        else {
          visited[Y][X]++;
          q.emplace_back(Y, X);
        }
      }
    }
  }


  // output
  cout << (visited[gy][gx] <= 2 ? "YES" : "NO") << endl;
  return 0;

}