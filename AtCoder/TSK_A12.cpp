#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n, k;
  cin >> n >> k;

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  auto f = [&](long x){
    long ret = 0;
    for (int i=0; i<n; i++) {
      ret += x / A[i];
    }
    return ret;
  };

  long ng = 0, ok = 1e9+5;
  while (abs(ng - ok) > 1) {
    long mid = (ok + ng) / 2;
    if (f(mid) >= k) ok = mid;
    else ng = mid;
  }

  // output
  cout << ok << endl;
  return 0;

}