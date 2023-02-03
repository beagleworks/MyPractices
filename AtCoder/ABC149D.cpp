// ABC149D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, k, r, s, p;
  string t;
  cin >> n >> k >> r >> s >> p >> t;

  // solve
  int ans = 0;
  map<char, int> score = {{'r', p}, {'s', r}, {'p', s}};
  vector<string> V(k);
  for (int i=0; i<n; i++) {
    V[i%k] += t[i];
  }

  for (int i=0; i<k; i++) {
    char pre = 0;
    for (auto c : V[i]) {
      if (pre != c) {
        ans += score[c];
        pre = c;
      }
      else {
        pre = 0;
      }
    }
  }

  // output
  cout << ans << endl;
  return 0;

}