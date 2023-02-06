// ABC129B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  vector<int> W(n);
  int l = 0, r = 0;
  for (int i=0; i<n; i++) {
    int w;
    cin >> w;
    W[i] = w;
    l += w;
  }

  // solve
  int ans = abs(l - r);
  for (int i=0; i<n; i++) {
    l -= W[i];
    r += W[i];
    ans = min(ans, abs(l-r));
  }

  // output
  cout << ans << endl;
  return 0;

}