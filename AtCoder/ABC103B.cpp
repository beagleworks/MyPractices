// ABC103B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string s, t;
  cin >> s >> t;

  // solve
  bool ans = false;
  for (int i=0; i<(int)s.size(); i++) {
    s = s.substr(1) + s.front();
    if (s == t) ans = true;
  }


  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}