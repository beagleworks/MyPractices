// ABC313A

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

  vector<int> P(n);
  for (auto &a : P) cin >> a;

  // solve
  int ans = P[0];
  bool f = false;
  for (int i=1; i<n; i++) {
    if (P[i] >= ans) {
      f = true;
      ans = P[i];
    }
  }

  // output
  cout << (f ? ans+1-P[0] : 0) << endl;
  return 0;

}