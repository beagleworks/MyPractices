// ABC146A

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
  map<string, int> ans = {{"SUN", 7},{"MON", 6},{"TUE", 5},{"WED", 4},{"THU", 3},{"FRI", 2},{"SAT", 1}};

  // output
  cout << ans[s] << endl;
  return 0;

}