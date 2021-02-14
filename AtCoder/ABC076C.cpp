#include <bits/stdc++.h>
using namespace std;

bool keychecker(string ss, string tt){
  for (int i=0; i<ss.size(); i++){
    if (ss[i] == '?') continue;
    else if (ss[i] != tt[i]) return false;
  }

  return true;
}

int main(){

  string s, t;
  cin >> s >> t;

  int ai = -1;
  for (int i=0; i<=(int)s.size()-(int)t.size(); i++){
    if (s[i] == '?' || s[i] == t[0]){
      string ss = s.substr(i, t.size());
      if (keychecker(ss, t)) ai = i;
    }
  }

  if (ai == -1) cout << "UNRESTORABLE" << endl;
  else{
    for (int i=0; i<s.size(); i++){
      if (ai <= i && i < ai+t.size()) cout << t[i-ai];
      else if (s[i] == '?') cout << 'a';
      else cout << s[i];
    }
    cout << endl;
  }

  return 0;
  
}
