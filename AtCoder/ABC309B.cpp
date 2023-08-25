// ABC309B

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

  vector<string> A(n);
  for (auto &a : A) cin >> a;

  // solve
  cout << A[1][0] << A[0].substr(0, n-1) << endl;
  for (int i=1; i<n-1; i++) {
    for (int j=0; j<n; j++) {
      if (j == 0) cout << A[i+1][j];
      else if (j == n-1) cout << A[i-1][j] << endl;
      else cout << A[i][j];
    }
  }
  cout << A[n-1].substr(1) << A[n-2][n-1] << endl;
  return 0;

}