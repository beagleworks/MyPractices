// CODE-FESTIVAL-2017_qualC_A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string s;
  cin >> s;

  // solve
  bool ans = false;
  for (int i=0; i+1<(int)s.size(); i++) {
    if (s[i] == 'A' && s[i+1] == 'C') ans = true;
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}