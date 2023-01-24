// ABC137C

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
  map<string, long long> mp;
  for (int i=0; i<n; i++) {
    string s;
    cin >> s;
    sort(ALL(s));
    mp[s]++;
  }

  // output
  long long ans = 0;
  for (auto [_, v] : mp) {
    ans += v*(v-1)/2;
  }
  cout << ans << endl;
  return 0;

}