// Typical90_008

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 1000000007;

int main(){

  // input
  int n;
  string s;
  cin >> n >> s;

  // solve
  const string atcoder = "atcoder";
  vector dp(n+1, vector<long long>(8, 0));
  dp[0][0] = 1;
  for (int i=0; i<n; i++) {
    for (int j=0; j<=7; j++) {
      dp[i+1][j] = (dp[i+1][j]+dp[i][j]) % MOD;
      if (atcoder[j] == s[i]){
        dp[i+1][j+1] += (dp[i+1][j+1]+dp[i][j]) % MOD;
      }
    }
  }

  // output
  cout << dp[n][7] << endl;
  return 0;

}