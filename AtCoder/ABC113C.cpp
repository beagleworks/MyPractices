// ABC113C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  vector Cities(n, vector<int>());
  queue<pair<int,int>> q;
  for (int i=0; i<m; i++) {
    int p, y;
    cin >> p >> y;
    p--;
    Cities[p].emplace_back(y);
    q.emplace(p, y);
  }

  // solve
  // y年に出来た街が当該県のx番目であることを格納
  map<int, int> mp;
  for (int i=0; i<n; i++) {
    sort(ALL(Cities[i]));
    for (int j=0; j<(int)Cities[i].size(); j++) {
      mp[Cities[i][j]] = j+1;
    }
  }

  // output
  while (!q.empty()) {
    auto e = q.front();
    q.pop();
    e.first++;
    int a = (to_string(e.first)).size();
    for (int i=0; i<6-a; i++) cout << 0;
    cout << e.first;
    int b = (to_string(mp[e.second])).size();
    for (int i=0; i<6-b; i++) cout << 0;
    cout << mp[e.second] << endl;
  }
  return 0;

}