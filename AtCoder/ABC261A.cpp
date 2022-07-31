// ABC261A
// https://atcoder.jp/contests/abc261/tasks/abc261_a

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
  int L1, R1, L2, R2;
  cin >> L1 >> R1 >> L2 >> R2;

  // solve
  int ans = max(min(R1, R2)-max(L1, L2), 0);

  // output
  cout << ans << '\n';
  return 0;
  
}