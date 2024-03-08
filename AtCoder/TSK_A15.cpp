#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  set<int> st(ALL(A));
  vector<int> R(ALL(st));

  vector<int> B(n);
  for (int i=0; i<n; i++) {
    auto p = lower_bound(ALL(R), A[i]);
    B[i] = p - R.begin() + 1;
  }

  // output
  for (auto x : B) cout << x << " ";
  cout << endl;
  return 0;

}