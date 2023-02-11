// AGC036A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int64_t s;
  cin >> s;

  // solve
  string ans;
  int64_t e = 1000000000;
  if (s <= e) ans = "0 0 1 0 " + to_string(s) + " " + to_string(s);
  else {
    int64_t a = e, d = (s+e-1) / e;
    int64_t bc = a*d - s;
    ans = "0 0 " + to_string(a) + " 1 " + to_string(bc) + " " + to_string(d);
  }

  cout << ans << endl;
  return 0;

}