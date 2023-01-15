// ABC118B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  // solve
  unordered_multiset<int> umst;
  for (int i=0; i<n; i++) {
    int k;
    cin >> k;
    for (int j=0; j<k; j++) {
      int a;
      cin >> a;
      umst.emplace(a);
    }
  }

  int ans = 0;
  for (int i=1; i<=m; i++) {
    if ((int)umst.count(i) == n) ans++;
  }

  // output
  cout << ans << endl;
  return 0;

}