// AGC024A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long a, b, c, k;
  cin >> a >> b >> c >> k;
  
  // output
  cout << (k % 2 == 0 ? a-b : b-a) << endl;
  return 0;

}