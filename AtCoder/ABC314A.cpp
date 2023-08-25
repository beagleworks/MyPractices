// ABC314A

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
  const string ans = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

  // output
  cout << ans.substr(0, n+2) << endl;
  return 0;

}