#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
// constexpr long long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  int t;
  cin >> t;

  auto f = [&](long long v, vector<int> &V){
    long long ret = 0;
    for (auto e : V) {
      ret += max(v - e, 0ll);
    }
    return ret;
  };

  // solve
  for (int i=0; i<t; i++) {
    int n, x;
    cin >> n >> x;

    vector<int> A(n);
    for (auto &a : A) cin >> a;
    sort(ALL(A));

    long long ok = 1, ng = (long long)INF*2;
    while (ng - ok > 1) {
      long long mid = (ok + ng) / 2;
      if ( f(mid, A) <= x ) ok = mid;
      else ng = mid;
    }

    cout << ok << '\n';
  }

  return 0;

}