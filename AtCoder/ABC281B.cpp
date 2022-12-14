// ABC281B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  string s;
  cin >> s;

  // solve
  bool ans = true;
  if (s.size() != 8) {
    cout << "No" << endl;
    return 0;
  }

  for (int i=0; i<8; i++) {
    if ((i == 0 || i == 7) && 'A' <= s[i] && s[i] <= 'Z') continue;
    if (i == 1 && '1' <= s[i] && s[i] <= '9') continue;
    if (2 <= i && i <= 6 && '0' <= s[i] && s[i] <= '9') continue;
    else ans = false;
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}