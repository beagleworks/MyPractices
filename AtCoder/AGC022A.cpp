// AGC022A

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
  if (n < 26) {
    vector<bool> V(26, false);
    for (auto c : s) {
      V[c - 'a'] = true;
    }
    for (int i=0; i<26; i++) {
      if (!V[i]) {
        s += char('a' + i);
        break;
      }
    }
  }
  else if (s == "zyxwvutsrqponmlkjihgfedcba") s = "-1";
  else {
    vector<bool> V(26, true);
    bool f = true;
    while(f) {
      char tail = s.back();
      V[tail-'a'] = false;
      s.pop_back();

      if (tail > s.back()) {
        char comp = s.back();
        s.pop_back();
        for (char c = comp+1; c <= 'z'; c++) {
          if (!V[c-'a']) {
            s += c;
            f = false;
            break;
          }
        }
      }
    }
  }

  cout << s << endl;
  return 0;

}