// KEYENCE2019_B

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
  bool ans = false;
  int cutLen = s.size() - 7;
  for (int i=0; i<=7; i++) {
    string t = s.substr(0, i) + s.substr(i+cutLen);
    if (t == "keyence") ans = true;
  }

  // output
  cout << (ans ? "YES" : "NO") << endl; 
  return 0;

}