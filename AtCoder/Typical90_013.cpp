// Typical90_013

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

// dijkstra
struct Edge {
  long long connect;
  long long cost;
};

// グラフG、始点s、距離配列dist
void dijkstra (const vector<vector<Edge>> &G, int s, vector<long long> &dist) {

  priority_queue<pair<long, int>, vector<pair<long, int>>, greater<pair<long, int>>> pq;
  dist[s] = 0;
  pq.emplace(dist[s], s);
  while (!pq.empty()) {
    auto p = pq.top();
    pq.pop();
    int v = p.second;
    if (dist[v] < p.first) continue;

    for (auto &e : G[v]) {
      if (dist[e.connect] > dist[v] + e.cost) {
        dist[e.connect] = dist[v] + e.cost;
        pq.emplace(dist[e.connect], e.connect);
      }
    }
  }

  return;
}

int main(){

  // input
  int n, m;
  cin >> n >> m;

  vector V(n, vector<Edge>());
  for (int i=0; i<m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    a--, b--;
    V[a].push_back({b,c});
    V[b].push_back({a,c});
  }

  // solve
  vector<long long> dista(n, INF), distb(n, INF);
  dijkstra(V, 0, dista);
  dijkstra(V, n-1, distb);
  for (int i=0; i<n; i++){    
    cout << dista[i] + distb[i] << endl;  
  }

  return 0;
}