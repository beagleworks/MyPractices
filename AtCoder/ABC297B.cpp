// ABC297B

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
  int b = -1, bb = -1, r = -1, rr = -1, k;
  for (int i=0; i<8; i++) {
    if (s[i] == 'B') {
      if (b == -1) b = i;
      else bb = i;
    }
    if (s[i] == 'R') {
      if (r == -1) r = i;
      else rr = i;
    }
    if (s[i] == 'K') k = i;
  }

  if ((b+bb) % 2 && r < k && k < rr) ans = true;

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}