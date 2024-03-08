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

pair<vector<int>, vector<vector<pair<int, int>>>> solve(){
  vector<int> dist(t, 0);
  vector<vector<pair<int, int>>> ret(t);
  for (int ind = 0; ind < t; ind++) {
    int n;
    cin >> n;
    vector<int> A(n*2);
    for (auto &a : A) cin >> a;

    sort(ALL(A));
    int nx, ny;
    for (int i=0; i<n; i++) {
      ret[ind].emplace_back(A[i], A[2*n-1-i]);
      if (i != 0) {
        dist[ind] += A[i] - nx + ny - A[2*n-1-i];
      }
      nx = A[i], ny = A[2*n-1-i];
    }

  }

  return {dist, ret};
}

int main(){

  input();

  auto ans = solve();
  for (int i=0; i<t; i++) {
    cout << ans.first[i] << '\n';
    for (auto x : ans.second[i]){
      cout << x.first << ' ' << x.second << '\n';
    }    
  }

  return 0;

}