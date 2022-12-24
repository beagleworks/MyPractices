// ABC074B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, k;
  cin >> n >> k;

  // solve
  int ans = 0;
  for (int i=0; i<n; i++) {
    int x;
    cin >> x;
    ans += min(x*2, (k-x)*2);
  }

  // output
  cout << ans << endl;
  return 0;

}