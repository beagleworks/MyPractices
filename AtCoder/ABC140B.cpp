// ABC140B

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

  vector<int> A(n), B(n), C(n-1);
  for (auto &a : A) cin >> a;
  for (auto &b : B) cin >> b;
  for (auto &c : C) cin >> c;

  // solve
  int ans = B[A[0]-1];
  for (int i=1; i<n; i++) {
    ans += B[A[i]-1];
    if (A[i]-A[i-1] == 1) ans += C[A[i-1]-1];
  }

  // output
  cout << ans << endl;
  return 0;

}