// ABC020C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

// for debug
#define COUT(a) cout << a << endl
#define VIEW(x) do{cout << "--" << #x << "--" << endl; view(x);}while(0)
template<typename T> void view(T e){COUT(e);}
template<typename T> void view(const vector<T>& v){for(const auto& e : v){ cout << e << " "; } cout << endl;}
template<typename T> void view(const vector<vector<T> >& vv){ for(const auto& v : vv){ view(v); } }

// 辺を表す型，ここでは重みを表す型を long long 型とします
struct Edge {
  int to; // 隣接頂点番号
  long long w; // 重み
  Edge(int to, long long w) : to(to), w(w) {}
};

// 重み付きグラフを表す型
using Graph = vector<vector<Edge>>;

// 緩和を実施する関数
template<class T> bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  else return false;
}

int h, w, t;
int sx, sy, gx, gy;

int dij(int T, const vector<vector<char>> &field) {
  Graph G(h*w);
  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      int ws = (field[i][j] == '#' ? T : 1);
      if (i != h-1) {
        int w1 = (field[i+1][j] == '#' ? T : 1);
        G[i*w+j].push_back(Edge((i+1)*w+j, w1));
        G[(i+1)*w+j].push_back(Edge(i*w+j, ws));
      }
      if (j != w-1) {
        int w1 = (field[i][j+1] == '#' ? T : 1);
        G[i*w+j].push_back(Edge(i*w+j+1, w1));
        G[i*w+j+1].push_back(Edge(i*w+j, ws));
      }
    }
  }

  // ダイクストラ法
  vector<long long> dist(h*w, INF);
  int s = sx*w+sy;
  dist[s] = 0;

  // (d[v], v) のペアを要素としたヒープを作る
  priority_queue<pair<long long, int>,
                vector<pair<long long, int>>,
                greater<pair<long long, int>>> que;
  que.push(make_pair(dist[s], s));

  while (!que.empty()) {
    // v: 使用済みでない頂点のうち d[v] が最小の頂点
    // d: v に対するキー値
    int v = que.top().second;
    long long d = que.top().first;
    que.pop();

    // d > dist[v] は，(d, v) がゴミであることを意味する
    if (d > dist[v]) continue; 

    // 頂点 v を始点とした各辺を緩和
    for (auto e : G[v]) {
      if (chmin(dist[e.to], dist[v] + e.w)) {
      // 更新があるならヒープに新たに挿入
        que.push(make_pair(dist[e.to], e.to)); 
      }
    }
  }

  return dist[gx*w+gy];

}

int main(){

  // input
  cin >> h >> w >> t;
  
  vector field(h, vector<char>(w));
  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      char c;
      cin >> c;
      field[i][j] = c;
      if (c == 'S') sx = i, sy = j;
      if (c == 'G') gx = i, gy = j;
    }
  }

  // solve
  int left = 1, right = t;
  while (right - left > 1) {
    int mid = left + (right - left) / 2;
    if (dij(mid, field) <= t) left = mid;
    else right = mid;
  }

  // output
  cout << left << endl;
  return 0;

}