// ABC301C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  string s, t;
  cin >> s >> t;

  // solve
  vector<int> S(27, 0), T(27, 0);
  for (auto c : s) {
    if (c == '@') S[26]++;
    else S[c - 'a']++;
  }
  for (auto c : t) {
    if (c == '@') T[26]++;
    else T[c - 'a']++;    
  }

  bool ans = true;
  for (int i=0; i<26; i++) {
    if (S[i] == T[i]) continue;
    if (i == 0 || (2 <= i && i <= 4) || i == 14 || i == 17 || i == 19) {
      if (S[i] < T[i]) {
        S[26] -= T[i] - S[i];
      }
      else T[26] -= S[i] - T[i];
    }
    else {
      ans = false;
    }
  }

  if (S[26] < 0 || T[26] < 0) ans = false;
  if (S[26] != T[26]) ans = false;

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}