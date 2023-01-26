// ABC083C(ARC088A)

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long x, y;
  cin >> x >> y;

  // solve
  int ans = 0;
  long long z = x;
  while (z <= y) {
    z *= 2;
    ans++;
  } 

  // output
  cout << ans << endl;
  return 0;

}