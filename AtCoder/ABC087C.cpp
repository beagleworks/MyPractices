// ABC087C(ARC090A)

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

  vector<int> A(n), B(n);
  for (auto &a : A) cin >> a;
  for (auto &b : B) cin >> b;

  // solve
  int ans = 0;
  for (int i=0; i<n; i++) {
    int sum = 0;
    bool b = false;
    for (int j=0; j<n; j++) {
      if (i == j) {
        b = true;
        sum += A[j] + B[j];
      }
      else sum += (b ? B[j] : A[j]);
    }
    ans = max(sum, ans);
  }

  // output
  cout << ans << endl;
  return 0;

}