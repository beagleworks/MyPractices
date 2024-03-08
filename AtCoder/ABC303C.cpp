// ABC303C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;


int main(){

  // input
  int n, m, h, k;
  string s;
  cin >> n >> m >> h >> k >> s;

  set<pair<int, int>> items;
  for (int i=0; i<m; i++) {
    int x, y;
    cin >> x >> y;
    items.emplace(y, x);
  }

  // solve
  unordered_map<char, int> dy;
  unordered_map<char, int> dx;
  dx['L'] = -1, dy['L'] = 0;
  dx['R'] = 1, dy['R'] = 0;
  dx['U'] = 0, dy['U'] = 1;
  dx['D'] = 0, dy['D'] = -1;

  int py = 0, px = 0;
  for (int i=0; i<n; i++) {
    py += dy[s[i]], px += dx[s[i]];
    h--;
    if (h < 0) {
      cout << "No" << endl;
      return 0;
    }
    if (items.count({py, px}) && h < k) {
      items.erase({py, px});
      h = k;
    }
  }

  // output
  cout << "Yes" << endl;
  return 0;

}