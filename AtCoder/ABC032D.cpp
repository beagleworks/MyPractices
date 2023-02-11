// ABC032D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr int64_t LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

// for debug
#define COUT(a) cout << a << endl
#define VIEW(x) do{cout << "--" << #x << "--" << endl; view(x);}while(0)
template<typename T> void view(T e){COUT(e);}
template<typename T> void view(const vector<T>& v){for(const auto& e : v){ cout << e << " "; } cout << endl;}
template<typename T> void view(const vector<vector<T> >& vv){ for(const auto& v : vv){ view(v); } }

int main(){

  // input
  int n, w;
  cin >> n >> w;

  vector<int> V(n), W(n);
  for (int i=0; i<n; i++) {
    cin >> V[i] >> W[i];
  }

  // solve
  if (n <= 30) {
    vector<pair<int64_t, int64_t>> P1, P2;
    for (int bit = 0; bit < (1 << (n/2)); bit++) {
      int64_t tv = 0, tw = 0;
      for (int i=0; i<n/2; i++) {
        if (bit & (1 << i)) {
          tv += V[i], tw += W[i];
        }
      }
      P1.emplace_back(tw, tv);
    }
    for (int bit = 0; bit < (1 << (n -(n/2))); bit++) {
      int64_t tv = 0, tw = 0;
      for (int i=0; i<n - (n/2); i++) {
        if (bit & (1 << i)) {
          tv += V[i+n/2], tw += W[i+n/2];
        }
      }
      P2.emplace_back(tw, tv);
    }

    sort(ALL(P1));
    sort(ALL(P2));
    int64_t ans = 0;
    for (auto [tw, tv] : P1) {
      int64_t rw = w - tw;
      if (rw < 0) break;
      for (auto [ttw, ttv] : P2) {
        if (ttw <= rw) {
          ans = max(ans, tv+ttv);
        }
      }
    }
    cout << ans << endl;
    return 0;
  }

  else if (*max_element(ALL(W)) <= 1000) {
    vector dp(n+1, vector(w+1, -1L));
    dp[0][0] = 0;
    for (int i=1; i<=n; i++) {
      for (int j=0; j<=w; j++) {
        if (dp[i-1][j] < 0) continue;
        dp[i][j] = max(dp[i][j], dp[i-1][j]);
        if (j+W[i-1] <= w) dp[i][j+W[i-1]] = max(dp[i][j+W[i-1]], dp[i-1][j] + V[i-1]);
      }
    }
    cout << *max_element(ALL(dp[n])) << endl;
  }

  else {
    vector dp(n+1, vector(201002, LINF));
    dp[0][0] = 0;
    for (int i=1; i<=n; i++) {
      for (int j=0; j<=200000; j++) {
        if (dp[i-1][j] == LINF) continue;
        dp[i][j] = min(dp[i][j], dp[i-1][j]);
        if (j+W[i-1] <= w) dp[i][j+V[i-1]] = min(dp[i][j+V[i-1]], dp[i-1][j] + W[i-1]);
      }
    }
    for (int j=200000; j>=0; j--) {
      if (dp[n][j] <= w) {
        cout << j << endl;
        return 0;
      }
    }
  }
}