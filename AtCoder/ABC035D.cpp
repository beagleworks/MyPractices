// ABC035D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 9099999988796543910LL;
constexpr int MOD = 998244353;

// for debug
#define COUT(a) cout << a << endl
#define VIEW(x) do{cout << "--" << #x << "--" << endl; view(x);}while(0)
template<typename T> void view(T e){COUT(e);}
template<typename T> void view(const vector<T>& v){for(const auto& e : v){ cout << e << " "; } cout << endl;}
template<typename T> void view(const vector<vector<T> >& vv){ for(const auto& v : vv){ view(v); } }

struct Edge {
  int to; // 隣接頂点番号
  long long w; // 重み
  Edge(int to, long long w) : to(to), w(w) {}
};
using Graph = vector<vector<Edge>>;

template<class T> bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  else return false;
}


int main(){

  // input
  long long n, m, t;
  cin >> n >> m >> t;

  vector<long long> A(n);
  for (auto &a : A) cin >> a;

  Graph G(n), H(n);
  for (int i=0; i<m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    a--, b--;
    G[a].push_back(Edge(b, c));
    H[b].push_back(Edge(a, c));
  }

  // solve
  vector<long long> dist(n, LINF), dist2(n, LINF);
  dist[0] = 0, dist2[0] = 0;
  priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> que, que2;
  que.push({dist[0], 0});
  que2.push({dist2[0], 0});

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
        que.push({dist[e.to], e.to}); 
      }
    }
  }

  while (!que2.empty()) {
    int v = que2.top().second;
    long long d = que2.top().first;
    que2.pop();
    if (d > dist2[v]) continue; 

    for (auto e : H[v]) {
      if (chmin(dist2[e.to], dist2[v] + e.w)) {
        que2.push({dist2[e.to], e.to}); 
      }
    }
  }

  vector<long long> ans(n, 0);
  for (int i=0; i<n; i++) {
    if (dist[i] == LINF || dist2[i] == LINF) continue;
    ans[i] = A[i] * (t - dist[i] - dist2[i]);
  }

  // output
  cout << *max_element(ALL(ans)) << endl;
  return 0;

}