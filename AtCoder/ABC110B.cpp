// ABC110B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, m, x, y;
  cin >> n >> m >> x >> y;

  // solve
  int mx = x, my = y;
  for (int i=0; i<n; i++) {
    int c;
    cin >> c;
    mx = max(c, mx);
  }
  for (int i=0; i<m; i++) {
    int c;
    cin >> c;
    my = min(c, my);
  }

  // output
  cout << (mx < my ? "No " : "") << "War" << endl;
  return 0;

}