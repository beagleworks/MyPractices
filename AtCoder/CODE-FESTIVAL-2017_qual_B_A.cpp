// CODE-FESTIVAL-2017_qual_B_A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string s;
  cin >> s;

  // solve
  string ans = s.substr(0, s.size()-8);

  // output
  cout << ans << endl;
  return 0;

}