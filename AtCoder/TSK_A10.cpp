// TSK_A10

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  int d;
  cin >> d;

  // solve
  vector<int> LM(n+2, 0), RM(n+2, 0);
  for (int i=2; i<=n+1; i++) {
    LM[i] = max(LM[i-1], A[i-2]);
  }
  for (int i=n-1; i>=0; i--) {
    RM[i] = max(RM[i+1], A[i]);
  }

  // output
  for (int i=0; i<d; i++) {
    int L, R;
    cin >> L >> R;
    cout << max(LM[L], RM[R]) << endl;
  }
  return 0;

}