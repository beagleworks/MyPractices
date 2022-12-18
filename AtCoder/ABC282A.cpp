// ABC282A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int k;
  cin >> k;

  // solve
  string ans = "";
  for (int i=0; i<k; i++) {
    ans += 'A' + i;
  }

  // output
  cout << ans << endl;
  return 0;

}