// ABC014B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, x;
  cin >> n >> x;

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  int ans = 0;
  for (int i=0; i<n; i++) {
    if (x % 2) ans += A[i];
    x /= 2;
  }

  // output
  cout << ans << endl;
  return 0;

}