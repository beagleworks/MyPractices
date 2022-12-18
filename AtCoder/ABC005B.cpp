// ABC005B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n;
  cin >> n;

  // solve
  int ans = INF;
  for (int i=0; i<n; i++) {
    int t;
    cin >> t;
    ans = min(t, ans);
  }

  // output
  cout << ans << endl;
  return 0;

}