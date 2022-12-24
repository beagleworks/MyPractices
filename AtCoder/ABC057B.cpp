// ABC057B

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
  vector<int> Ax(n), Ay(n), Cx(m), Cy(m);
  for (int i=0; i<n; i++) {
    cin >> Ax[i] >> Ay[i];
  }
  for (int i=0; i<m; i++) {
    cin >> Cx[i] >> Cy[i];
  }

  // solve
  for (int i=0; i<n; i++) {
    int mind = INF, ans;
    for (int j=0; j<m; j++) {
      int d = abs(Ax[i]-Cx[j]) + abs(Ay[i]-Cy[j]);
      if (d < mind){
        mind = d;
        ans = j+1;
      }
    }
    cout << ans << endl;
  }

  return 0;

}