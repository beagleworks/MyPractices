// ABC174B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  long d;
  cin >> n >> d;

  vector<long> X(n), Y(n);
  for (int i=0; i<n; i++) {
    cin >> X[i] >> Y[i];
  }

  // solve
  int ans = 0;
  for (int i=0; i<n; i++) {
    if (X[i]*X[i]+Y[i]*Y[i] <= d*d) ans++;
  }

  // output
  cout << ans << endl;
  return 0;

}