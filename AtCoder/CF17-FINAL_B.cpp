// CF17-FINAL_B

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
  int a = 0, b = 0, c = 0;
  for (auto t : s) {
    if (t == 'a') a++;
    else if (t == 'b') b++;
    else c++;
  }
  int d = min({a,b,c});
  a -= d, b -= d, c -= d;
  int mn = min({a,b,c}), mx = max({a,b,c}), md = a+b+c-mn-mx;

  // output
  cout << (a+b+c == 0 || (mx == 1 && mn == 0 && (md == 1 || md == 0)) ? "YES" : "NO") << endl;
  return 0;

}