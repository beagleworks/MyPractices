// ABC305A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  // solve
  int d = 99;
  for (int i=-5; i<=5; i++) {
    if (n+i < 0) continue;
    if ((n+i) % 5 == 0) {
      if (abs(i) < abs(d)) {
        d = i;
      }
    }
  }

  // output
  cout << n+d << endl;
  return 0;

}