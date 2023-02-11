// AGC018A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, k;
  cin >> n >> k;

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  sort(ALL(A));
  int s = A[0];
  for (int i=1; i<n; i++) {
    s = gcd(s, A[i]);
  }

  // output
  cout << (A[n-1] >= k && k%s == 0 ? "" : "IM") << "POSSIBLE" << endl;
  return 0;

}