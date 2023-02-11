// ABC267D

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

int main(){

  // input
  int n, m;
  cin >> n >> m;

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  vector dp(n+1, vector<int64_t>(m+2, -LINF));
  dp[0][0] = 0;
  for (int i=0; i<n; i++) {
    for (int64_t j=0; j<=m; j++) {
      if (dp[i][j] == -LINF) continue;
      dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
      dp[i+1][j+1] = max(dp[i+1][j+1],  dp[i][j] + (j+1) * A[i]);
    }
  }

  // output
  cout << dp[n][m] << endl;
  // VIEW(dp);
  return 0;

}