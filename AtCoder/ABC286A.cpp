// ABC286A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, p, q, r, s;
  cin >> n >> p >> q >> r >> s;
  p--, q--, r--, s--;

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  for (int i=0; i<n; i++) {
    if (p <= i && i <= q) {
      cout << A[i+(r-p)] << endl;
    }
    else if (r <= i && i <= s) {
      cout << A[i-(r-p)] << endl;
    }
    else cout << A[i] << endl;
  }

  return 0;

}