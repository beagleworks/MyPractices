#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int t;
  cin >> t;

  // solve
  for (int i=0; i<t; i++) {
    long long n, k, x;
    cin >> n >> k >> x;

    long long mn = (k+1)*k/2;
    long long mx = (n+1)*n/2 - (n-k+1)*(n-k)/2;
    if (mn <= x && x <= mx) cout << "Yes" << '\n';
    else cout << "No" << '\n';
  }

  return 0;

}