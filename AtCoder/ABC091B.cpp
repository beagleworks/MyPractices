// ABC091B

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

  map<string, int> mp;
  for (int i=0; i<n; i++) {
    string s;
    cin >> s;
    mp[s]++;
  }
  
  int m;
  cin >> m;
  for (int i=0; i<m; i++) {
    string s;
    cin >> s;
    mp[s]--;
  }

  // output
  int ans = 0;
  for (auto [_, p] : mp) ans = max(ans, p);
  cout << ans << endl;
  return 0;

}