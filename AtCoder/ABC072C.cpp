// ABC072C(ARC082A)

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n;
  cin >> n;

  // solve
  map<int, int> mp;
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    mp[a-1]++, mp[a]++, mp[a+1]++;
  }

  // output
  int ans = 0;
  for (auto p : mp) ans = max(p.second, ans);
  cout << ans << endl;
  return 0;

}