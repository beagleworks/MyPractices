// ABC127C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  // solve
  int L = -INF, R = INF;
  for(int i=0; i<m; i++) {
    int l, r;
    cin >> l >> r;
    L = max(L, l);
    R = min(R, r);
  }

  // output
  cout << max(R-L+1, 0) << endl;
  return 0;

}