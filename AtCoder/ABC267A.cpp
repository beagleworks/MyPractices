// ABC267A

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
  int ans = (s == "Monday" ? 5 : s == "Tuesday" ? 4 : s == "Wednesday" ? 3 : s == "Thursday" ? 2 : 1);

  // output
  cout << ans << endl;
  return 0;

}