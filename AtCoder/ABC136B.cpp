// ABC136B

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
  int ans = 0;
  for (int i=1; i<=n; i++) {
    if ((int)to_string(i).size()%2) ans++;
  }

  // output
  cout << ans << endl;
  return 0;

}