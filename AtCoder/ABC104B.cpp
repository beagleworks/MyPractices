// ABC104B
// https://atcoder.jp/contests/abc104/tasks/abc104_b

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

  // solve
  bool C = false;
  if (s[0] == 'A'){
    for (int i=1; i<(int)s.size(); i++){
      if (!(('a' <= s[i] && s[i] <= 'z') || s[i] == 'C')) {
        cout << "WA" << endl;
        return 0;
      }
      if (s[i] == 'C' && (i == 1 || i == (int)s.size()-1)){
        cout << "WA" << endl;
        return 0;
      }
      
      if (s[i] == 'C'){
        if (!C) C = true;
        else{
          cout << "WA" << endl;
          return 0;
        }
      }
    }
  }

  // output
  if (C) cout << "AC" << endl;
  else cout << "WA" << endl;
  return 0;
  
}