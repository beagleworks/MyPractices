// ABC072B

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
  for (int i=0; i<(int)s.size(); i++) {
    if (i%2 == 0) cout << s[i];
  }

  // output
  cout << endl;
  return 0;

}