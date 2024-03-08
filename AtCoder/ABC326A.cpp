// ABC326A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int x, y;
  cin >> x >> y;

  // solve
  bool ans = false;
  if ((x < y && y - x <= 2) || (x > y && x - y <= 3)) ans = true;

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}