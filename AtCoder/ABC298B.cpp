// ABC298B

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

  vector A(n, vector<int>(n));
  vector B(n, vector<int>(n));
  for (auto &X : A) for (auto &a : X) cin >> a;
  for (auto &X : B) for (auto &a : X) cin >> a;

  // solve
  bool ans = false;
  for (int x=0; x<4; x++) {
    ans = true;
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) {
      if (A[i][j] == 1 && B[i][j] == 0) ans = false;
    }

    if (ans) break;

    vector C(n, vector<int>(n));
    for (int i=0; i<n; i++) {
      for (int j=0; j<n; j++) {
        C[i][j] = A[n-1-j][i];
      }
    }
    A = C;
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}