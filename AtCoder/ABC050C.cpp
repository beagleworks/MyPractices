// ABC050C(ARC066A)

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 1000000007;

int main(){

  // input
  int n;
  cin >> n;

  vector<int> A(n);
  map<int, int> mp;
  for (auto &a : A) {
    cin >> a;
    mp[a]++;
  }

  // solve
  int64_t ans = 1;
  if (n % 2 == 0) {
    for (int i=0; i<n; i++) {
      if ((i % 2 == 0 && mp[i] != 0) || (i % 2 && mp[i] != 2)) {
        ans = 0;
        break;
      }
      if (i % 2) {
        ans *= 2;
        ans %= MOD;
      }
    }

  }

  else {
    for (int i=0; i<n; i++) {
      if (mp[0] != 1 || (i % 2 && mp[i] != 0) || (i % 2 == 0 && i != 0 && mp[i] != 2)) {
        ans = 0;
        break;
      }

      if (i % 2 == 0 && i != 0) {
        ans *= 2;
        ans %= MOD;
      }
    }
  }

  // output
  cout << ans << endl;
  return 0;

}