// ABC293B

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
  vector<bool> ans(n, false);
  for (int i=0; i<n; i++) {
    A[i]--;
    if (!ans[i]) ans[A[i]] = true;
  }

  // output
  cout << count(ALL(ans), false) << endl;
  for (int i=0; i<n; i++) {
    if (!ans[i]) cout << i+1 << "\n";
  }
  return 0;

}