// ABC320A

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
  long x = 1, y = 1;
  for (int i=0; i<b; i++) {
    x *= a;
  }
  for (int i=0; i<a; i++) {
    y *= b;
  }

  // output
  cout << x+y << endl;
  return 0;

}