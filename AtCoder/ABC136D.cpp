// ABC136D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  string s;
  cin >> s;

  // solve
  int len = s.size();
  vector dp(20, vector<int>(len));
  for (int j=0; j<len; j++) {
    dp[0][j] = (s[j] == 'R' ? j+1 : j-1);
  }

  for (int i=1; i<20; i++) {
    for (int j=0; j<len; j++) {
      dp[i][j] = dp[i-1][dp[i-1][j]];
    }
  }

  // output
  vector ans(len, 0);
  for (auto x : dp[19]) ans[x]++;
  
  for (auto a : ans) cout << a << " ";
  cout << endl;
  return 0;

}