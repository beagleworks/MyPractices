// ABC267B

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
  if (s[0] == '1') {
    cout << "No" << endl;
    return 0;
  }

  bool ans = false;
  vector<bool> V(7, false);
  if (s[6] == '1') V[0] = true;
  if (s[3] == '1') V[1] = true;
  if (s[1] == '1' || s[7] == '1') V[2] = true;
  if (s[4] == '1') V[3] = true;
  if (s[2] == '1' || s[8] == '1') V[4] = true;
  if (s[5] == '1') V[5] = true;
  if (s[9] == '1') V[6] = true;

  for (int i=0; i<7; i++) {
    if (V[i]) {
      bool f = false;
      for (int j=i+1; j<7; j++) {
        if (!V[j]) f = true;
        else if (f && V[j]) ans = true;
      }
    }
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}