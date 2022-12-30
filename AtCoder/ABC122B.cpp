// ABC122B

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
  int len = s.size();
  s += "X";
  for (int i=0; i<len; i++) {
    int cnt = 0;
    for (int j=0; true; j++) {
      if (s[i+j] == 'A' || s[i+j] == 'C' || s[i+j] == 'G' || s[i+j] == 'T') {
        cnt++;
      }
      else {
        ans = max(ans, cnt);
        break;
      }
    }
  }

  // output
  cout << ans << endl;
  return 0;

}