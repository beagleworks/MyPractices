// ABC066B
// https://atcoder.jp/contests/abc066/tasks/abc066_b

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
  while (true) {
    s.pop_back();
    if (s.substr(0, s.size()/2) == s.substr(s.size()/2)) {
      cout << s.size() << endl;
      return 0;
    }
  }
 
}