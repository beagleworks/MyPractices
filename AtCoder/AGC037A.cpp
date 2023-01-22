// AGC037A

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
  string s;
  cin >> s;

  // solve
  int n = s.size();
  vector dp(n+1, vector<int>(3, -1));
  dp[0][1] = dp[0][2] = 0;

  for (int i=0; i<n; i++) {
    if (dp[i][1] >= 0) {
      if (s[i] != s[i-1]) dp[i+1][1] = max(dp[i][1] + 1, dp[i+1][1]);
      if (i+2 <= n) dp[i+2][2] = max(dp[i][1] + 1, dp[i+2][2]);
    }
    if (dp[i][2] >= 0) {    
      dp[i+1][1] = max(dp[i][2] + 1, dp[i+1][1]);
      if(i+2 <= n && i-2 >= 0 && s[i-2] != s[i] && s[i-1] != s[i+1] ) dp[i+2][2] = max(dp[i][2] + 1, dp[i+2][2]);
    }
  }
  

  // output
  cout << max(dp[n][1], dp[n][2]) << endl;
  // VIEW(dp);
  return 0;

}