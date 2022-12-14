// ABC279B
// https://atcoder.jp/contests/abc279/tasks/abc279_b

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  string s, t;
  cin >> s >> t;

  // solve
  for (int i=0; i+t.size()<=s.size(); i++){
    if (s.substr(i, t.size()) == t){
      cout << "Yes" << endl;
      return 0;
    }
  }

  // output
  cout << "No" << endl;
  return 0;
  
}
