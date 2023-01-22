// ABC158C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int a, b;
  cin >> a >> b;

  // solve
  for (int i=1; i<=1500; i++) {
    if (floor(i*0.08) == a && floor(i*0.1) == b) {
      cout << i << endl;
      return 0;
    }
  }

  // output
  cout << -1 << endl;
  return 0;

}