// YAHOO-PROCON2019-QUAL_B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  map<int, int> mp;
  for (int i=0; i<3; i++) {
    int a, b;
    cin >> a >> b;
    mp[a]++;
    mp[b]++;
  }

  // solve
  bool ans = true;
  for (int i=1; i<=4; i++) {
    if (mp[i] == 3) ans = false;
  }

  // output
  cout << (ans ? "YES" : "NO") << endl;
  return 0;

}