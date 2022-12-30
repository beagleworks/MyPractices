// ABC141B

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
  string ans = "Yes";
  int len = s.size();
  for (int i=0; i<len; i++) {
    if ((s[i] == 'R' && i%2) || (s[i] == 'L' && i%2 == 0)) {
      ans = "No";
    } 
  }

  // output
  cout << ans << endl;
  return 0;

}