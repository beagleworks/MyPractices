// ABC311D

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
  int n, m;
  cin >> n >> m;

  vector<string> Field(n);
  for (auto &f : Field) cin >> f;

  // solve
  vector visited(n, vector<int>(m, 0));
  visited[1][1] = 2;

  queue<pair<int, int>> q;
  q.emplace(1, 1);
  while (!q.empty()) {
    auto p = q.front();
    q.pop();

    for (int i=0; i<4; i++) {
      int Y = p.first, X = p.second;
      while (true) {
        Y += dy[i];
        X += dx[i];
        if (Field[Y][X] == '#') {
          int YY =  Y - dy[i];
          int XX = X - dx[i];
          if (visited[YY][XX] == 1) {
            visited[YY][XX] = 2;
            q.emplace(YY, XX);
          }
          break;
        }
        else visited[Y][X] = max(visited[Y][X], 1);
      }
    }
  }

  // output
  int ans = 0;
  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      if (visited[i][j] > 0) ans++;
    }
  }

  cout << ans << endl;
  return 0;

}