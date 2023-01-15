// ABC114B

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
  int ans = INF;
  int n = (s[0] - '0')*100 + (s[1] - '0')*10;
  for (int i=2; i<(int)s.size(); i++) {
    n += s[i] - '0';
    ans = min(abs(753-n), ans);
    n *= 10;
    n %= 1000;
  }

  // output
  cout << ans << endl;
  return 0;

}