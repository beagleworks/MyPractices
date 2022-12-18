// ABC269D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

map<pair<int, int>, int> P; // 座標x,yが白(=0)か黒(他)か
const int dx[] = {0, 1, 0, -1, 1, -1};
const int dy[] = {1, 0, -1, 0, 1, -1};

void dfs(pair<int,int> p, int c) {
  P[p] = c;
  for (int i=0; i<6; i++) {
    int X = p.first + dx[i];
    int Y = p.second + dy[i];
    if (P[{X, Y}] == -1) dfs({X, Y}, c);
  }
  return;
}

int main(){

  // input
  int n;
  cin >> n;

  vector<pair<int,int>> V; // i番目の座標

  for (int i=0; i<n; i++) {
    int x, y;
    cin >> x >> y;
    V.emplace_back(x, y);
    P[{x, y}] = -1;
  }

  // solve
  int ans = 0;

  for (int i=0; i<n; i++) {
    if (P[V[i]] == -1) {
      dfs(V[i], ++ans);
    }
  }

  // output
  cout << ans << endl;
  return 0;

}