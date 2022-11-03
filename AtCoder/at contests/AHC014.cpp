// AHC014
// https://atcoder.jp/contests/ahc014/tasks/ahc014_a

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
#define VVB vector<vector<bool>>
#define VVI vector<vector<int>>
#define VVVB vector<vector<vector<bool>>>
#define TIII tuple<int, int, int>
const int INF = 1e9;
const int MOD = 1e9 + 7;
const long long LINF = 1e18;

// type
// 0: -
// 1: |
// 2: ／
// 3: ＼

VVI Qx(61), Qy(61), Qdx(61*2), Qdy(61*2);

queue<TIII> checkPath(int x, int y, int u, int v, const VVB& Q, const VVVB& E){

  int cx = 0, cy = 0;
  int type;
  int dist = max(abs(x-u), abs(y-v));
  queue<TIII> fal;

  if ((y == v)) {
    type = 0;
    cy = y;
    cx = min(x, u);
  }
  else if ((x == u)) {
    type = 1;
    cx = x;
    cy = min(y, v);
  }
  else if ((x < u && y < v) || (x > u && y > v)){
    type = 2; 
    cx = min(x, u);
    cy = min(y, v);
  }
  else {
    type = 3;
    cx = min(x, u);
    cy = max(y, v);
  }
  queue<TIII> ret;
  for (int i=0; i<dist; i++){
    int pcx = cx, pcy = cy;
    if (type == 0) cx++;
    else if (type == 1) cy++;  
    else if (type == 2) cx++, cy++;
    else pcx--, cx++, cy--;

    if (pcx < 0) return fal;
    if (E[pcx][pcy][type]) return fal;
    if (i != dist-1 && Q[cx][cy]) return fal;
    if (type != 3) ret.push({pcx, pcy, type});
    else ret.push({pcx+1, pcy, type});
  }

  return ret;

}

// 点を使用済みにする
void fillPoint(int x, int y, VVB& Q){
  Q[x][y] = true;
  Qx[x].push_back(y); // x座標が等しい点の集合
  Qy[y].push_back(x); // y座標
  Qdx[x-y+61].push_back(x);
  Qdy[x+y].push_back(x);
  return;
}

// 辺を使用済みにする
// 破壊的
void fillEdge(queue<TIII>& qt, VVVB& E){
  while (!qt.empty()){
    auto t = qt.front();
    qt.pop();
    int type = get<2>(t);
    if (type != 3) E[get<0>(t)][get<1>(t)][type] = true;
    else E[get<0>(t)-1][get<1>(t)][type] = true;
  }
  return;
}

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  // input
  int n, m;
  cin >> n >> m;
  VVB Q(n, vector(n, false));
  VVVB E(n, vector(n, vector(4, false)));
  for (int i=0; i<m; i++){
    int x, y;
    cin >> x >> y;
    fillPoint(x, y, Q);
  }
 
  VVI ans;

  // solve
  bool f = true;
  while(f){
    f = false;
    for (int i=0; i<n; i++){
      for (int j=0; j<n; j++){
        if (Q[i][j]) continue;

        // 斜め
        if (!Qdx[i-j+61].empty() && !Qdy[i+j].empty()) {
          int nux1 = 100, ndx1 = -100;
          for (auto qx: Qdx[i-j+61]){
            if (qx > i) nux1 = min(qx, nux1);
            else ndx1 = max(qx, ndx1);
          }
          int nux3 = 100, ndx3 = -100;
          for (auto qx: Qdy[i+j]){
            if (qx > i) nux3 = min(qx, nux3);
            else ndx3 = max(qx, ndx3);
          }
          vector<int> ax1 = {nux1, nux1, ndx1, ndx1}, ax3 = {ndx3, nux3, nux3, ndx3};
          
          for (int k=0; k<4; k++){
            if (abs(ax1[k]) > n || abs(ax3[k]) > n) continue;
            int ax2 = ax1[k] + ax3[k] - i;
            int ay2 = j + ax1[k] - ax3[k];
            if (ax2 < 0 || ay2 < 0 || ax2 >= n || ay2 >= n) continue;
            if (Q[ax2][ay2]){
              int ay1 = j+(ax1[k]-i), ay3 = j+(i-ax3[k]);
              queue<TIII> q0 = checkPath(i, j, ax1[k], ay1, Q, E), q1 = checkPath(ax1[k], ay1, ax2, ay2, Q, E),
              q2 = checkPath(ax2, ay2, ax3[k], ay3, Q, E), q3 = checkPath(ax3[k], ay3, i, j, Q, E);
              if (!q0.empty() && !q1.empty() && !q2.empty() && !q3.empty()){
                vector<int> t = {i, j, ax1[k], ay1, ax2, ay2, ax3[k], ay3};
                ans.push_back(t);
                fillPoint(i, j, Q);
                fillEdge(q0, E), fillEdge(q1, E), fillEdge(q2, E), fillEdge(q3, E);                
                f = true;
                break;
              }
            }
          }
        }
       
        if (Q[i][j]) continue; // 先に作成済みの場合はcontinue

        // 軸に平行
        if (!Qx[i].empty() && !Qy[j].empty()) {
          int nuy = 100, ndy = -100;
          for (auto qy: Qx[i]){
            if (qy > j) nuy = min(qy, nuy);
            else ndy = max(qy, ndy);
          }
          int nux = 100, ndx = -100;
          for (auto qx: Qy[j]){
            if (qx > i) nux = min(qx, nux);
            else ndx = max(qx, ndx);
          }
          vector<int> ax = {nux, nux, ndx, ndx}, ay = {nuy, ndy, ndy, nuy};
          
          for (int k=0; k<4; k++){
            if (abs(ax[k]) > n || abs(ay[k]) > n) continue;
            if (Q[ax[k]][ay[k]]){
              queue<TIII> q0 = checkPath(i, j, i, ay[k], Q, E), q1 = checkPath(i, ay[k], ax[k], ay[k], Q, E),
              q2 = checkPath(ax[k], ay[k], ax[k], j, Q, E), q3 = checkPath(ax[k], j, i, j, Q, E);
              if (!q0.empty() && !q1.empty() && !q2.empty() && !q3.empty()){
                vector<int> t = {i, j, i, ay[k], ax[k], ay[k], ax[k], j};
                ans.push_back(t);
                fillPoint(i, j, Q);
                fillEdge(q0, E), fillEdge(q1, E), fillEdge(q2, E), fillEdge(q3, E);                
                f = true;
                break;
              }
            }
          }
        }


      }
    }
  }

  cout << ans.size() << '\n';
  for (auto a: ans){
    for (auto aa: a){
      cout << aa << " ";
    }
    cout << endl;
  }

  return 0;

}