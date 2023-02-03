// AGC031A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 1000000007;

int main(){

  // input
  int n;
  string s;
  cin >> n >> s;

  // solve
  map<char, int> mp;
  for (auto c : s) mp[c]++;
  for (auto &[_, v] : mp) {
    v++;
  }

  long long ans = 1;
  for (auto [_, v] : mp) {
    ans = (ans * v) % MOD;
  }

  // output
  cout << ans-1 << endl;
  return 0;

}