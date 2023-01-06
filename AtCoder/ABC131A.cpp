// ABC131A

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

  // output
  cout << (s[0] == s[1] || s[1] == s[2] || s[2] == s[3] ? "Bad" : "Good") << endl;
  return 0;

}