// Typical90_058

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 100000;

int main(){

  // input
  int n;
  int64_t k;
  cin >> n >> k;

  // solve
  int lf, le = -1;
  map<int, int> mp;
  mp[n] = 0;
  int cur = n;
  for (int i=0; i<k; i++) {
    int x = cur, y = 0;
    while (x > 0) {
      y += x % 10;
      x /= 10;
    }
    cur += y;
    cur %= MOD;
    if (mp[cur] || cur == n) {
      lf = mp[cur];
      le = i;
      break;
    }
    mp[cur] = i+1;
  }

  // output
  if (le == -1) {
    cout << cur << endl;
    return 0;
  }
  k -= lf;
  k %= le - lf + 1;
  for (auto p : mp) {
    //cout << p.first << " " << p.second << endl;
    if (p.second == k+lf) {
      cout << p.first << endl;
      return 0;
    }
  }

}