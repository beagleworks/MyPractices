// DIVERTA2019_1_C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  int ans = 0;
  int ba = 0, xa = 0, bx = 0;
  vector<string> S;
  for (int i=0; i<n; i++) {
    string s;
    cin >> s;
    S.emplace_back(s);
    if (s[0] == 'B') {
      if (s.back() == 'A') ba++;
      else bx++;
    }
    else if (s.back() == 'A') xa++;

    for (int j=0; j+1<(int)s.size(); j++) {
      if (s.substr(j, 2) == "AB") ans++;
    }
  }

  // solve
  if (ba > 0){
    ans += ba-1;
    if (xa > 0) {
      ans++;
      xa--;
    }
    if (bx > 0) {
      ans++;
      bx--;
    }
  }

  int as = min(xa, bx);
  ans += as;

  // output
  cout << ans << endl;
  return 0;

}