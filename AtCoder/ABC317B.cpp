// ABC317B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  sort(ALL(A));
  for (int i=1; i<n; i++) {
    if (A[i] != A[i-1]+1) {
      cout << A[i-1]+1 << endl;
      return 0;
    }
  }

  if (A[0] == 1) cout << A[n-1]+1 << endl;
  else cout << A[0]-1 << endl;
  return 0;
}