// ABC282B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  vector<string> S(n);
  for (auto &s : S) cin >> s;

  // solve
  int ans = 0;

  for (int i=0; i<n-1; i++) {
    for (int j=i+1; j<n; j++) {
      bool f = true;
      for (int k=0; k<m; k++) {
        if (S[i][k] == 'x' && S[j][k] == 'x') f = false; 
      }
      if (f) ans++;
    }
  }


  // output
  cout << ans << endl;
  return 0;

}