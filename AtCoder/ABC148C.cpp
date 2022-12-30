// ABC148C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long n, m;
  cin >> n >> m;

  // solve
  long long ans = lcm(n,m);

  // output
  cout << ans << endl;
  return 0;

}