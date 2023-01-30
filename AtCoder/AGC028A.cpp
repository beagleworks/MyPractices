// AGC028A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long n, m;
  string s, t;
  cin >> n >> m >> s >> t;

  // solve
  long long ans = lcm(n, m);
  bool f = true;
  map<long long, char> mp;

  for (int i=0; i<n; i++) mp[i*ans/n] = s[i];
  for (int i=0; i<m; i++) {
    if (!mp[i*ans/m]) continue;
    if (mp[i*ans/m] != t[i]) f = false;
  }

  // output
  cout << (f ? ans : -1LL) << endl;
  return 0;

}