// CODE-FESTIVAL-2016_qual_B_A

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
  const string title = "CODEFESTIVAL2016";

  // solve
  int ans = 0;
  for (int i=0; i<16; i++) {
    if (s[i] != title[i]) ans++;
  }

  // output
  cout << ans << endl;
  return 0;

}