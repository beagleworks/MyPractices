// ABC321C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int k;
  cin >> k;

  // solve
  vector<long> ans;
  for (int bit = 1; bit < (1 << 10); bit++){
    long m = 0;
    for (int i=9; i>=0; i--){
      if (bit & (1 << i)){
        m *= 10;
        m += i;
      }
    }

    ans.emplace_back(m);
  }

  sort(ALL(ans));

  // output
  cout << ans[k] << endl;
  return 0;

}