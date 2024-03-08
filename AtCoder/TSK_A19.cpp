#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()


int main(){

  // input
  int n, w;
  cin >> n >> w;

  vector<int> W(n), V(n);
  for (int i=0; i<n; i++) {
    cin >> W[i] >> V[i];
  }

  // solve
  vector<long> dp(300000);
  for (int i=0; i<n; i++) {
    for (int j=w; j>=0; j--) {
      dp[j+W[i]] = max(dp[j+W[i]], dp[j]+V[i]);
    }
  }

  // output
  long ans = 0;
  for (int i=0; i<=w; i++) ans = max(ans, dp[i]);
  cout << ans << endl;
  return 0;

}