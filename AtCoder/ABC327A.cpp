// ABC327A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  string s;
  cin >> n >> s;

  // solve
  bool ans = false;
  for (int i=0; i<n-1; i++) {
    if (s.substr(i, 2) == "ab" || s.substr(i, 2) == "ba") ans = true;
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}