// ABC282D

#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
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

int main(){

  // input
  long long n, m;
  cin >> n >> m;

  // solve
  long long ans = n*(n-1)/2 - m;
  vector<vector<int>> A(n);
  dsu d(n);
  for (int i=0; i<m; i++) {
    int u, v;
    cin >> u >> v;
    u--, v--;
    d.merge(u, v);
    A[u].emplace_back(v);
    A[v].emplace_back(u);
  }

  auto gs = d.groups();
  vector<int> Colored(n, 0);
  for (auto G : gs) {
    queue<int> q;
    q.emplace(G[0]);
    Colored[G[0]] = 1;
    long long cp = 1, cn = 0;
    while (!q.empty()) {
      int p = q.front();
      q.pop();
      for (auto pp : A[p]) {
        if (!Colored[pp]) {
          q.emplace(pp);
          Colored[pp] = -Colored[p];
          if (Colored[pp] == 1) cp++;
          else cn++;
        }
        else if (Colored[pp] != -Colored[p]) {
          cout << 0 << endl;
          return 0;
        }
      }
    }

    ans -= cp*(cp-1) / 2 + cn*(cn-1) / 2;
  }


  // output
  cout << ans << endl;
  return 0;

}