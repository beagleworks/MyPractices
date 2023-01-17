// ABC124C

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
  int a0 = 0, a1 = 0;
  for (int i=0; i<(int)s.size(); i++) {
    if (i % 2 == 0) {
      if (s[i] == '0') a1++;
      else a0++;
    }
    else {
      if (s[i] == '0') a0++;
      else a1++;
    }
  }

  // output
  cout << min(a0, a1) << endl;
  return 0;

}