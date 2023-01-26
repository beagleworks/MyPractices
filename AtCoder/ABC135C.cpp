// ABC135C

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

  vector<long long> A(n+1), B(n);
  for (auto &a : A) cin >> a;
  for (auto &b : B) cin >> b;

  // solve
  long long ans = 0;
  for (int i=0; i<n; i++) {
    long long capa = B[i];

    if (A[i] <= capa) {
      ans += A[i];
      capa -= A[i];
    }
    else {
      ans += capa;
      continue;
    }

    ans += min(A[i+1], capa);
    A[i+1] = max(A[i+1] - capa, 0LL);

  }

  // output
  cout << ans << endl;
  return 0;

}