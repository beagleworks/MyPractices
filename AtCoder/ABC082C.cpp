// ABC082C(ARC087A)

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

  map<int, int> mp;
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    mp[a]++;
  }

  // solve
  int ans = 0;
  for (auto [i, p] : mp) {
    if (i <= p) ans += p - i;
    else ans += p;
  }

  // output
  cout << ans << endl;
  return 0;

}