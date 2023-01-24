// CODE-FESTIVAL-2016_qual_C_A

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
  bool f = false, ans = false;
  for (int i=0; i<n; i++) {
    if (s[i] == 'C') f = true;
    if (f && s[i] == 'F') ans = true; 
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}