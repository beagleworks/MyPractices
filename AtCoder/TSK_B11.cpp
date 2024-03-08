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

  int q;
  cin >> q;

  vector<int> Q(q);
  for (auto &a : Q) cin >> a;

  // solve
  sort(ALL(A));
  for (auto q : Q) {
    cout << lower_bound(ALL(A), q) - A.begin() << endl;
  }

  return 0;

}