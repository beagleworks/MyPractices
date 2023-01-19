// ABC272D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long n, m;
  cin >> n >> m;

  // solve
  vector field(n, vector<int>(n, -1));
  set<pair<int, int>> lst;
  for (long long i=0; i*i<=m; i++) {
    for (long long j=i; j*j<=m; j++) {
      if (m == i*i + j*j) lst.emplace(i, j);
    }
  }

  constexpr int dx1[8] = {1, 1, -1, -1, 0, 0, 0, 0};
  constexpr int dx2[8] = {0, 0, 0, 0, 1, 1, -1, -1};
  constexpr int dy1[8] = {1, -1, 1, -1, 0, 0, 0, 0};
  constexpr int dy2[8] = {0, 0, 0, 0, 1, -1, 1, -1};
  
  queue<pair<int, int>> q;
  q.emplace(0, 0);
  field[0][0] = 0;
  while (!q.empty()) {
    auto [x,y] = q.front();
    q.pop();
    for (auto p : lst) {
      for (int i=0; i<8; i++) {
        int xx = x+p.first*dx1[i]+p.second*dx2[i];
        int yy = y+p.second*dy1[i]+p.first*dy2[i];
        if (0 <= xx && xx < n && 0 <= yy && yy < n) {
          if (field[xx][yy] > -1) continue;
          field[xx][yy] = field[x][y] + 1;
          q.emplace(xx, yy);
        }       
      }
    }
  }


  // output
  for (auto f : field) {
    for (auto ff : f) {
      cout << ff << " ";
    }
    cout << '\n';
  }
  return 0;

}