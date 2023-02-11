// ARC014B

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

  // solve
  map<string, bool> mp;
  char pre = 0;
  int memo = -1;
  for (int i=0; i<n; i++) {
    string s;
    cin >> s;
    if (mp[s] || (i != 0 && pre != s[0])) {
      memo = i;
      break;
    }

    mp[s] = true;
    pre = s.back();
  }

  // output
  cout << (memo == -1 ? "DRAW" : memo % 2 ? "WIN" : "LOSE") << endl;
  return 0;

}