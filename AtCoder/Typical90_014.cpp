// Typical90_014

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
  vector<int> A(n), B(n);
  for (auto &a : A) cin >> a;
  for (auto &b : B) cin >> b;

  // solve
  long long ans = 0;
  sort(ALL(A)), sort(ALL(B));
  for (int i=0; i<n; i++) {
    ans += abs(A[i] - B[i]);
  }

  // output
  cout << ans << endl;
  return 0;

}