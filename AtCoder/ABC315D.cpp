// ABC315D

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
  
  vector<string> Field(h);
  for (auto &f : Field) cin >> f;

  // solve
  vector<unordered_map<char, int>> row(h), col(w);
  vector<unordered_set<char>> rows(h), cols(w);

  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      char c = Field[i][j];
      row[i][c]++;
      rows[i].emplace(c);
      col[j][c]++;
      cols[j].emplace(c);
    }
  }

  
  while (true) {
    queue<int> r, c;
    for (int i=0; i<h; i++) {
      if (rows[i].size() == 1 ) {
        auto x = *(rows[i].begin());
        if (row[i][x] > 1) r.emplace(i);
      }
    }
    for (int i=0; i<w; i++) {
      if (cols[i].size() == 1) {
        auto x = *(cols[i].begin());
        if (col[i][x] > 1) c.emplace(i);
      }
    }

    if (r.empty() && c.empty()) break;
    while (!r.empty()) {
      auto p = r.front();
      r.pop();
      row[p].clear();
      rows[p].clear();
      for (int i=0; i<w; i++) {
        if (col[i][Field[p][i]]) {
          col[i][Field[p][i]]--;
          if (!col[i][Field[p][i]]) cols[i].erase(Field[p][i]);
        }
      }
    }
    while (!c.empty()) {
      auto p = c.front();
      c.pop();
      col[p].clear();
      cols[p].clear();
      for (int i=0; i<h; i++) {
        if (row[i][Field[i][p]]) {
          row[i][Field[i][p]]--;
          if (!row[i][Field[i][p]]) rows[i].erase(Field[i][p]);
        }
      }
    }
  }

  // output
  int ans = 0;
  for (auto x : row) for (auto [_, n] : x) ans += n;
  cout << ans << endl;
  return 0;

}