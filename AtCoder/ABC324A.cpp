// ABC324A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  int n;
  cin >> n;

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  sort(ALL(A));
  cout << (A[0] == A[n-1] ? "Yes" : "No") << endl;
  return 0;

}