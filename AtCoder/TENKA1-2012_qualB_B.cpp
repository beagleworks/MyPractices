// TENKA1-2012_qualB_B

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
  int cur = 0;
  string ans = "";


  // head search
  bool head = false;
  for (int i=0; i<n; i++) {
    if (s[i] == '_') continue;
    else if ('0' <= s[i] && s[i] <= 'Z') {
      cout << s << endl;
      return 0;
    }
    else {
      ans += s.substr(0, i+1);
      cur = i;
      head = true;
      break;
    }
  }

  if (!head) {
    cout << s << endl;
    return 0;
  }


  // first word
  int type = 0; // camel : 1, snake : -1
  for (int i=cur+1; i<n; i++) {
    if (('a' <= s[i] && s[i] <= 'z') || ('0' <= s[i] && s[i] <= '9')) ans += s[i];
    else if ('A' <= s[i] && s[i] <= 'Z') type = 1;
    else if (s[i] == '_') type = -1;
    if (type) {
      cur = i;
      break;
    }
  }

  if (!type) {
    cout << s << endl;    
    return 0;
  }

  // camel -> snake
  if (type == 1){
    bool tail = false;
    for (int i=cur; i<n; i++) {
      if (tail && s[i] != '_') {
        cout << s << endl;
        return 0;
      }

      if (s[i] == '_') {
        tail = true;
        ans += "_";
      }
      else if (('a' <= s[i] && s[i] <= 'z') || ('0' <= s[i] && s[i] <= '9')) ans += s[i];
      else if ('A' <= s[i] && s[i] <= 'Z') {
        ans += "_";
        ans += char(s[i] + 32);
      }
    }

    cout << ans << endl;
    return 0;
  }

  // snake -> camel
  else {
    bool whead = false, tail = false;
    
    for (int i=cur; i<n; i++) {
      if (tail && s[i] != '_') {
        cout << s << endl;
        return 0;
      }

      if (tail) ans += "_";
      else if (whead && s[i] == '_') {
        tail = true;
        ans += "_";
      }
      else if (s[i] == '_') {
        whead = true;
        ans += "_";
      }
      else if (whead) {
        if ('a' <= s[i] && s[i] <= 'z') {
          ans.pop_back();
          ans += char(s[i] - 32);
          whead = false;
        }
        else {
          cout << s << endl;
          return 0;
        }
      }
      else if ('A' <= s[i] && s[i] <= 'Z') {
        cout << s << endl;
        return 0;
      }
      else {
        ans += s[i];
      }
    }
    cout << ans << endl;
    return 0;
  }
}