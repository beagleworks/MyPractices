// ABC048B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long a, b, x;
  cin >> a >> b >> x;

  // solve
  long long bl = b/x;
  long long al = a/x; 
  long long t = (a%x ? 0 : 1);

  // output
  cout << bl-al+t << endl;
  return 0;

}