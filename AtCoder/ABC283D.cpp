// ABC283D

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
  int n = s.size();
  map<char, bool> mp;
  string t = "";
  bool ans = true;
  for (int i=0; i<n; i++) {
    if (s[i] != ')') {
      t += s[i];
      if (s[i] == '(') continue;
      if (mp[s[i]]) {
        ans = false;
        break;
      }      
      mp[s[i]] = true;
    }
    // )
    else {
      while (true) {
        char b = t.back();
        t.pop_back();
        if (b == '(') break;
        mp[b] = false;
      }
    }
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}