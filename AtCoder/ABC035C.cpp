// ABC035C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, q;
  cin >> n >> q;

  // solve
  vector<int> V(n, 0);
  for (int i=0; i<q; i++) {
    int l, r;
    cin >> l >> r;
    l--;
    V[l]++;
    V[r]--;
  }

  // output
  vector<int> ans(n);
  ans[0] = V[0];
  for (int i=1; i<n; i++) {
    ans[i] = ans[i-1] + V[i];
  }
  for (auto a : ans) {
    cout << a%2;
  }
  cout << '\n';
  return 0;

}