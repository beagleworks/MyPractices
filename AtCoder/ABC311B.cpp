// ABC311B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, d;
  cin >> n >> d;

  // solve
  string s;
  cin >> s;

  for (int i=1; i<n; i++) {
    string t;
    cin >> t;

    for (int j=0; j<d; j++) {
      if (t[j] == 'x') s[j] = 'x';
    }
  }

  // output
  int ans = 0, cnt = 0;
  for (auto c : s) {
    if (c == 'o') {
      cnt++;
      ans = max(ans, cnt);
    }
    else {
      cnt = 0;
    }
  }

  cout << ans << endl;
  return 0;

}