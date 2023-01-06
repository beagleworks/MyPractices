// ABC085C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, y;
  cin >> n >> y;
  y /= 1000;

  // solve
  for (int i=0; i<=n; i++) {
    for (int j=0; j<=n; j++) {
      int k = n - i - j;
      if (k < 0) break;
      if (10*i+5*j+k == y) {
        cout << i << " " << j << " " << k << endl;
        return 0;
      }
    }
  }

  // output
  cout << "-1 -1 -1" << endl;
  return 0;

}