// ABC209A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int a, b;
  cin >> a >> b;

  // solve
  int ans = b - a + 1;

  // output
  cout << max(0, ans) << endl;
  return 0;

}