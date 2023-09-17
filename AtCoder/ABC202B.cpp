// ABC202B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  string s;
  cin >> s;

  // solve
  reverse(ALL(s));
  for (auto c : s) {
    if (c == '6') cout << 9;
    else if (c == '9') cout << 6;
    else cout << c;
  }

  cout << endl;
  return 0;

}