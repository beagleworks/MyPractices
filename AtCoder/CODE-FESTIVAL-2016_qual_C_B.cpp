// CODE-FESTIVAL-2016_qual_C_B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int k, t;
  cin >> k >> t;

  vector<int> A(t);
  for (auto &a : A) cin >> a;

  // solve
  sort(ALL(A));
  int ans = A[t-1] - 1;
  for (int i=0; i<t-1; i++) {
    ans -= A[i];
  }

  // output
  cout << max(0, ans) << endl;
  return 0;

}