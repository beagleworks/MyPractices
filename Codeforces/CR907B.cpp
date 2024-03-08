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

vector<vector<ll>> solve(){
  vector<vector<ll>> ret(t);
  for (int ind = 0; ind < t; ind++) {
    int n, q;
    cin >> n >> q;
    vector<ll> A(n);
    for (auto &a : A) cin >> a;
    vector<int> X(q);
    for (auto &a : X) cin >> a;

    vector<ll> XX;
    int now = 99;
    for (auto x : X) {
      if (x < now) {
        ll y = 1;
        for (int i=0; i<x; i++) {
          y *= 2;
        }
        XX.emplace_back(y);
        now = x;
      }
    }
    
    for (int i=0; i<n; i++) {
      for (auto z : XX) {
        if (A[i] % z == 0) A[i] += z/2;
      }
    }

    ret[ind] = A;
  }

  return ret;
}

int main(){

  input();

  auto ans = solve();
  for (int i=0; i<t; i++) {
    for (int j=0; j<(int)ans[i].size(); j++) {
      cout << ans[i][j] << (j == (int)ans[i].size()-1 ? '\n' : ' '); 
    }
  }

  return 0;

}