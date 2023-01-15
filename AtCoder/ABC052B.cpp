// ABC052B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  string s;
  cin >> n >> s;

  // solve
  int ans = 0, x = 0;
  for (auto c : s) {
    if (c == 'I') x++;
    else x--;
    ans = max(x, ans);
  }

  // output
  cout << ans << endl;
  return 0;

}