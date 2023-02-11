// ABC260C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;


long long blue(int b);
int n, x, y;
vector<long long> dpr(11, -1), dpb(11, -1);

long long red(int r) {

  if (dpr[r] >= 0) return dpr[r];
  return dpr[r] = red(r-1) + blue(r) * x;
}

long long blue(int b) {

  if (dpb[b] >= 0) return dpb[b];
  return dpb[b] = red(b-1) + blue(b-1) * y;
}

int main(){

  // input
  cin >> n >> x >> y;

  // solve
  dpr[0] = dpr[1] = 0;
  dpb[0] = 0;
  dpb[1] = 1;

  // output
  cout << red(n) << endl;
  return 0;

}