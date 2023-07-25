// ABC293A

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

  // output
  string ans = "";
  for (int i=0; i<(int)s.length(); i++) {
    ans += s[i];
    if (i % 2) swap(ans[i-1], ans[i]); 
  }
  
  cout << ans << endl;
  return 0;

}