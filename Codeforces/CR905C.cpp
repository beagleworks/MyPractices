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
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for (auto &a : A) cin >> a;

    int mn = 9;
    for (int i=0; i<n; i++) {
      mn = min(mn, (k-A[i]%k)%k);
    }
    ret[ind] = mn;

    if (k == 4){
      int even = 0;
      bool four = false;
      for (auto x : A) {
        if (x % 4 == 0) four = true;
        else if (x % 2 == 0) even++;
      }
      ret[ind] = min(ret[ind], (four ? 0 : max(0, 2-even)));

    }
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