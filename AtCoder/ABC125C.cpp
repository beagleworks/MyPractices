// ABC125C

#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int op(int a, int b) { return gcd(a, b); }

int e() { return 0; }

int main(){

  // input
  int n;
  cin >> n;
  
  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  int ans = 0;
  segtree<int, op, e> seg(A);

  // output
  for (int i=0; i<n; i++) {
    int x = gcd(seg.prod(0, i), seg.prod(i+1, n));
    ans = max(x, ans);
  }
  cout << ans << endl;
  return 0;

}