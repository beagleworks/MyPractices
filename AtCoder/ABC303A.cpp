// ABC303A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  string s, t;
  cin >> n >> s >> t;

  // solve
  bool ans = true;
  for (int i=0; i<n; i++) {
    if (s[i] != t[i]) {
      if ((s[i] == '1' && t[i] == 'l') || (s[i] == '0' && t[i] == 'o') || (s[i] == 'l' && t[i] == '1') || (s[i] == 'o' && t[i] == '0')) continue;
      ans = false;
    }
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}