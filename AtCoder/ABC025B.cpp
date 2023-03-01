// ABC025B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, a, b;
  cin >> n >> a >> b;

  // solve
  int ans = 0;
  for (int i=0; i<n; i++) {
    string s;
    int d;
    cin >> s >> d;
    d = max(a, min(d, b));
    if (s == "West") d *= -1;
    ans += d;
  }

  // output
  if (ans < 0) {
    cout << "West ";
    ans *= -1;
  }
  else if (ans > 0) cout << "East ";
  cout << ans << endl;
  return 0;

}