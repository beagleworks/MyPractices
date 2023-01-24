// ABC158D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string s;
  int q;
  cin >> s >> q;

  // solve
  string ans = s;
  bool norm = true;

  for (int i=0; i<q; i++) {
    int t;
    cin >> t;
    if (t == 1) norm = !norm;
    else {
      int f;
      string c;
      cin >> f >> c;
      if ((f == 1 && norm) || (f == 2 && !norm)) {
        ans = c + ans;
      }
      else ans += c;
    }
  }

  // output
  if (!norm) reverse(ALL(ans));

  cout << ans << '\n';
  return 0;

}