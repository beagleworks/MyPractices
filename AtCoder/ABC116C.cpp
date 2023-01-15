// ABC116C

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

  vector frq(n, vector<int>(101, false));
  for (int i=0; i<n; i++) {
    int h;
    cin >> h;
    for (int j=1; j<=h; j++) {
      frq[i][j] = true;
    }
  }

  // solve
  int ans = 0;
  for (int j=1; j<=100; j++) {
    bool pre = false;
    for (int i=0; i<n; i++) {
      if (!pre && frq[i][j]) ans++;
      pre = frq[i][j];
    }
  }

  // output
  cout << ans << endl;
  return 0;

}