// ABC088B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n;
  cin >> n;

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  sort(ALL(A), greater<int>());
  int ans = 0;
  for (int i=0; i<n; i++) {
    if (i%2 == 1) ans += A[i-1] - A[i];
  }

  if (n%2 == 1) ans += A[n-1];

  // output
  cout << ans << endl;
  return 0;

}