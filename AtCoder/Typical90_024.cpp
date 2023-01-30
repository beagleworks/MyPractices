// Typical90_024

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

  vector<int> A(n), B(n);
  for (auto &a : A) cin >> a;
  for (auto &b : B) cin >> b;

  // solve
  int diff = 0;
  for (int i=0; i<n; i++) {
    diff += abs(A[i] - B[i]);
  }

  // output
  cout << (diff<=k && (k-diff)%2 == 0 ? "Yes" : "No") << endl;
  return 0;

}