// ABC160A

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
  
  // output
  cout << (s[2] == s[3] && s[4] == s[5] ? "Yes" : "No") << endl;
  return 0;

}