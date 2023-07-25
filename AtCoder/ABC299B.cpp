// ABC299B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, t;
  cin >> n >> t;

  vector<int> C(n), R(n);
  for (auto &a : C) cin >> a;
  for (auto &a : R) cin >> a;

  // solve
  int w1 = 0, p1 = 0;
  int w2 = 0, p2 = 0;
  for (int i=0; i<n; i++) {
    if (C[i] == t) {
      if (R[i] > w1) {
        p1 = i+1;
        w1 = R[i];
      }
    }
    else if (C[i] == C[0]) {
      if (R[i] > w2) {
        p2 = i+1;
        w2 = R[i];
      }
    }
  }

  // output
  cout << (p1 != 0 ? p1 : p2) << endl;
  return 0;

}