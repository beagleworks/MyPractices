// ABC275B
// https://atcoder.jp/contests/abc275/tasks/abc275_b

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 1e9 + 7;
const long long LINF = 1e18;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  long long a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  long long g = 998244353;

  // solve
  long long am = a % g, bm = b % g, cm = c % g;
  long long A = (((am * bm) % g) * cm) % g;
  long long dm = d % g, em = e % g, fm = f % g;
  long long B = (((((((-1+g) % g) * dm) % g) * em) % g) * fm) % g;
  long long ans = (A + B) % g;

  // output
  cout << ans << '\n';
  return 0;
  
}
