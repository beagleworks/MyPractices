// AGC013A

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
  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  if (n == 1) {
    cout << 1 << endl;
    return 0;
  }

  int ans = 1;
  int rise = -1;
  for (int i=1; i<n; i++) {
    if (rise == -1) {
      if (A[i-1] == A[i]) continue;
      rise = A[i-1] < A[i];
    }
    else if ((A[i-1] < A[i] && rise == 0) || (A[i-1] > A[i] && rise == 1)) {
      rise = -1;
      ans++;
    }
  }

  // output
  cout << ans << endl;
  return 0;

}