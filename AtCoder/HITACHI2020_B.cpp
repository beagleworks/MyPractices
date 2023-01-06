// HITACHI2020_B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int a, b, m;
  cin >> a >> b >> m;
  vector<int> A(a), B(b);
  for (auto &p : A) cin >> p;
  for (auto &q : B) cin >> q;

  // solve
  int ans = INF;
  for (int i=0; i<m; i++) {
    int x, y, c;
    cin >> x >> y >> c;
    x--, y--;
    ans = min(A[x]+B[y]-c, ans);
  }

  sort(ALL(A));
  sort(ALL(B));
  ans = min(A[0]+B[0], ans);

  // output
  cout << ans << endl;
  return 0;

}