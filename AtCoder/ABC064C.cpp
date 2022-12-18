// ABC064C

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
  vector<int> A(n);
  for (auto &a : A) cin >> a;
  // sort(ALL(A));

  map<int, int> mp;
  int high = 0;
  for (auto a : A) {
    if (a < 3200) mp[a/400]++;
    else high++;
  }

  // output
  int ans = 0;
  for (int i=0; i<8; i++) {
    if (mp[i]) ans++; 
  }
  if (!ans && high) cout << 1 << " " << high << endl;
  else cout << ans << " " << ans+high << endl;
  return 0;

}