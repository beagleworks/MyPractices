// ABC008B

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
  map<string, int> mp;
  for (int i=0; i<n; i++) {
    string s;
    cin >> s;
    mp[s]++;
  }

  // output
  int mx = 0;
  string ans = "";
  for (auto [k, v] : mp) {
    if (mx < v) {
      mx = v;
      ans = k;
    }
  }
  cout << ans << endl;
  return 0;

}