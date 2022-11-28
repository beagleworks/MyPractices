// ABC276A
// https://atcoder.jp/contests/abc276/tasks/abc276_a

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
  int ans = -1;
  for (int i=0; i<(int)s.size(); i++){
    if (s[i] == 'a'){
      ans = i+1;
    }
  }

  // output
  cout << ans << endl;
  return 0;
  
}
