// HITACHI2020_A

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
  int n = s.size();
  bool ans = true;
  if (n%2) ans = false;
  else {
    for (int i=0; i<n; i++) {
      if (!((i%2 == 0 && s[i] == 'h') || (i%2 == 1 && s[i] == 'i'))) ans = false;
    }
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}