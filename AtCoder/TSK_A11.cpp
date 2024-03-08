// TSK_A11

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n, x;
  cin >> n >> x;
  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  auto p = lower_bound(ALL(A), x);

  // output
  cout << p - A.begin() + 1<< endl;
  return 0;

}