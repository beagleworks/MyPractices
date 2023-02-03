// ABC143D

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

  vector<int> L(n);
  for (auto &l : L) cin >> l;

  // solve
  int ans = 0;
  sort(ALL(L));

  for (int i=0; i<n; i++) {
    for (int j=i+1; j<n; j++) {
      auto itr = lower_bound(ALL(L), L[i]+L[j]);
      auto p = distance(L.begin()+j, --itr);
      ans += max(0, (int)p);
    }
  }

  // output
  cout << ans << endl;
  return 0;

}