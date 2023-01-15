// AGC016A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string S;
  cin >> S;

  // solve
  int ans = INF;
  for (char c='a'; c<='z'; c++) {
    string s = S;
    if (count(ALL(s), c) == 0) continue;
    int cnt = 0;
    while (count(ALL(s), c) != (int)s.size()) {
      for (int i=0; i<(int)s.size()-1; i++) {
        if (s[i] == c || s[i+1] == c) s[i] = c;
      }
      s.pop_back();
      cnt++;
    }

    ans = min(cnt, ans);    
  }

  // output
  cout << ans << endl;
  return 0;

}