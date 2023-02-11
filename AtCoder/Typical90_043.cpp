// Typical90_043

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int h, w, rs, cs, rt, ct;
  cin >> h >> w >> rs >> cs >> rt >> ct;
  rs--, cs--;
  rt--, ct--;

  vector<string> field(h);
  for (auto &s : field) cin >> s;

  // solve
  deque<tuple<int, int, int>> q;
  vector visited(h, vector(w, vector(4, INF))); //NESW
  for (int i=0; i<4; i++) {
    visited[rs][cs][i] = 0;
    q.emplace_back(rs, cs, i);
  }
  constexpr int dr[4] = {-1, 0, 1, 0};
  constexpr int dc[4] = {0, 1, 0, -1};
  while(!q.empty()) {
    auto [r, c, d] = q.front();
    q.pop_front();
    for (int i=0; i<4; i++) {
      int R = r+dr[i], C = c+dc[i];

      if (R < 0 || C < 0 || R >= h || C >= w) continue;
      if (field[R][C] == '#') continue;
      
      if (d == i && visited[R][C][i] > visited[r][c][d]) {
        visited[R][C][i] = visited[r][c][d]; 
        q.emplace_front(R, C, i);
      }
      else if (visited[R][C][i] > visited[r][c][d] + 1) {
        visited[R][C][i] = visited[r][c][d] + 1; 
        q.emplace_back(R, C, i);
      }
    }
  }

  // output
  std::cout << *min_element(ALL(visited[rt][ct])) << endl;
  return 0;

}