// ABC010C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int ax, ay, bx, by, t, v, n;
  cin >> ax >> ay >> bx >> by >> t >> v >> n;

  // solve
  double mxlen = t*v;
  bool ans = false;
  for (int i=0; i<n; i++) {
    int x, y;
    cin >> x >> y;
    double len1 = sqrt((ax-x)*(ax-x)+(ay-y)*(ay-y));
    double len2 = sqrt((x-bx)*(x-bx)+(y-by)*(y-by));
    if (len1+len2 <= mxlen) ans = true;
  }

  // output
  cout << (ans ? "YES" : "NO") << endl;
  return 0;

}