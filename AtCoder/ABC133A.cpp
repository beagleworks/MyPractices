// ABC133A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, a, b;
  cin >> n >> a >> b;

  // solve
  int ans = min(a*n, b);

  // output
  cout << ans << endl;
  return 0;

}