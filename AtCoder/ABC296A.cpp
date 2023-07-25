// ABC296A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  string s;
  cin >> n >> s;

  // solve
  bool ans = true;
  for (int i=0; i<n; i++) {
    if (n == 1) break;
    if (i % 2 == 0 && s[i] != s[0]) ans = false;
    if (i % 2 && s[i] != s[1]) ans = false;
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}