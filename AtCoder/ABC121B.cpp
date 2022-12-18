// ABC121B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, m, c;
  cin >> n >> m >> c;
  vector<int> B(m);
  for (auto &b : B) cin >> b;

  // solve
  int ans = 0;
  for (int i=0; i<n; i++) {
    int sum = 0;
    for (int j=0; j<m; j++) {
      int a;
      cin >> a;
      sum += a*B[j];
    }
    if (sum+c > 0) ans++;
  }

  // output
  cout << ans << endl;
  return 0;

}