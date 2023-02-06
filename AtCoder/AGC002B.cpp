// AGC002B

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
  vector A(n, 1);
  vector F(n, false);
  F[0] = true;
  int ans = 0;

  for (int i=0; i<m; i++) {
    int x, y;
    cin >> x >> y;
    x--, y--;

    if (F[x]) F[y] = true;
    A[x]--, A[y]++;
    if (A[x] == 0) F[x] = false;
  }

  // output
  for (auto f : F) if (f) ans++;
  cout << ans << endl;
  return 0;

}