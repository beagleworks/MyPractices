#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
using ll = long long;
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int t;
void input(){
  cin >> t;
}

vector<int> solve(){
  vector<int> ret(t);
  for (int ind = 0; ind < t; ind++) {
    int x, y, k;
    cin >> x >> y >> k;
    if (y < x) ret[ind] = x;
    else if (x+k >= y) ret[ind] = y;
    else ret[ind] = 2*y-x-k;
  }

  return ret;
}

int main(){

  input();

  auto ans = solve();
  for (int i=0; i<t; i++) {
    cout << ans[i] << '\n';
  }

  return 0;

}