// ARC008C

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

struct Edge {
    int to; // 隣接頂点番号
    long double w; // 重み
    Edge(int to, long double w) : to(to), w(w) {}
};

// 緩和を実施する関数
template<class T> bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  else return false;
}

// 重み付きグラフを表す型
using Graph = vector<vector<Edge>>;

long double len(pair<int, int> a, pair<int, int> b) {
  return sqrt((a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second));
}

int main(){

  // input
  int n;
  cin >> n;

  vector<pair<int, int>> Pos;
  vector<int> T(n), R(n);
  for (int i=0; i<n; i++) {
    int x, y, t, r;
    cin >> x >> y >> t >> r;
    Pos.emplace_back(x, y);
    T[i] = t, R[i] = r;
  }

  // solve
  Graph G(n);
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      G[i].push_back(Edge(j,len(Pos[i], Pos[j])/min(T[i], R[j])));
    }
  }

  // ダイクストラ法
  vector<long double> dist(n, 1e9);
  dist[0] = 0;

  // (d[v], v) のペアを要素としたヒープを作る
  priority_queue<pair<long double, int>,
                vector<pair<long double, int>>,
                greater<pair<long double, int>>> que;
  que.push(make_pair(dist[0], 0));

  // ダイクストラ法の反復を開始
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
  
  // 結果出力
  sort(ALL(dist), greater<long double>());
  long double ans = 0;
  for (int v = 0; v < n-1; ++v) {
    ans = max(ans, dist[v]+v);
  }

  printf("%.10Lf\n", ans);

  // VIEW(dist);

  return 0;
}