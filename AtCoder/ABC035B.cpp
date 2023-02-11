// ABC035B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string s;
  int t;
  cin >> s >> t;

  // solve
  map<char, int> mp;
  for (auto c : s) mp[c]++;

  int ans = abs(mp['U']-mp['D']) + abs(mp['L']-mp['R']);
  if (t == 1) ans += mp['?'];
  else {
    if (mp['?'] <= ans) ans -= mp['?'];
    else ans = (mp['?'] - ans) % 2;
  }

  // output
  cout << ans << endl;
  return 0;

}