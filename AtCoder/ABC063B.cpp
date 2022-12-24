// ABC063B

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
  map<char, bool> mp;
  bool ans = true;
  for (auto c : s) {
    if (mp[c]) {
      ans = false;
      break;
    }
    else mp[c] = true;
  }

  // output
  cout << (ans ? "yes" : "no") << endl;
  return 0;

}