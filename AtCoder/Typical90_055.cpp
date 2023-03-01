// Typical90_055

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, p, q;
  cin >> n >> p >> q;

  vector<int64_t> A(n);
  for (auto &a : A) cin >> a;

  // solve
  int ans = 0;
  for (int i=0; i<n; i++) {
    for (int j=i+1; j<n; j++) {
      for (int k=j+1; k<n; k++) {
        for (int l=k+1; l<n; l++) {
          for (int m=l+1; m<n; m++) {
            if (A[i]%p*A[j]%p*A[k]%p*A[l]%p*A[m]%p == q) ans++;
          }
        }
      }
    }
  }

  // output
  cout << ans << endl;
  return 0;

}