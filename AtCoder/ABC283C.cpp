// ABC283C

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
  int ans = 0;
  bool pre = false;
  for (auto c : s) {
    if (c > '0') {
      ans++;
      pre = false;
    }
    else {
      if (pre) pre = false;
      else {
        ans++;
        pre = true;
      }
    }
  }

  // output
  cout << ans << endl;
  return 0;

}