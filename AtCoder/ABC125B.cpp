// ABC125B

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
  vector<int> V(n), C(n);
  for (auto &v : V) cin >> v;
  for (auto &c : C) cin >> c;

  // solve
  int ans = 0;
  for (int i=0; i<n; i++) {
    ans += max(0, V[i]-C[i]);
  }

  // output
  cout << ans << endl;
  return 0;

}