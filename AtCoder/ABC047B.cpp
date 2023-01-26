// ABC047B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int w, h, n;
  cin >> w >> h >> n;

  // solve
  int l = 0, r = w, b = 0, t = h;
  for (int i=0; i<n; i++) {
    int x, y, a;
    cin >> x >> y >> a;

    if (a == 1) l = max(l, x);
    else if (a == 2) r = min(r, x);
    else if (a == 3) b = max(b, y);
    else t = min(t, y);
  }

  // output
  cout << max(0, (r-l)) * max(0, (t-b)) << endl;
  return 0;

}