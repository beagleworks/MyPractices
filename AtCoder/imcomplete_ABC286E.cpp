// ABC286E

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
  int n;
  cin >> n;

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  vector V(n, vector<Edge>());
  vector C(n, vector<int>(n, 0));
  for (int i=0; i<n; i++) {
    string s;
    cin >> s;
    for (int j=0; j<n; j++) {
      if (s[j] == 'Y') {
        V[i].push_back({j, 1});
        C[i][j] = A[j];
      }
    }
  }

  int q;
  cin >> q;

  // solve
  
  for (int i=0; i<q; i++){
    int u, v;
    cin >> u >> v;
    u--, v--;
    
    vector<long long> dist(n, INF);
    int tn = 0;
    dijkstra(V, u, dist);
    if (dist[v] == INF) cout << "Impossible" << endl;
    else cout << dist[v] << " " << tn << endl;
  }


  return 0;

}