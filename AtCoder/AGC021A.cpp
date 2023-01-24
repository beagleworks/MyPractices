// AGC021A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string n;
  cin >> n;

  // solve
  int cnt = 0;
  for (auto m : n) cnt += m - '0';
  int ans = 9 * (n.size()-1) + (n[0] - '0' - 1);

  // output
  cout << max(cnt, ans) << endl;
  return 0;

}