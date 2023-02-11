// Typical90_046

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

  vector<int> A(n), B(n), C(n);
  for (auto &a : A) cin >> a;
  for (auto &a : B) cin >> a;
  for (auto &a : C) cin >> a;

  // solve
  int64_t ans = 0;
  map<int, int64_t> MA, MB, MC;
  for (int i=0; i<n; i++) {
    MA[A[i]%46]++;
    MB[B[i]%46]++;
    MC[C[i]%46]++;  
  }

  for (int i=0; i<46; i++) {
    for (int j=0; j<46; j++) {
      for (int k=0; k<46; k++) {
        if ((i+j+k) % 46) continue;
        if (!MA[i] || !MB[j] || !MC[k]) continue;
        ans += MA[i]*MB[j]*MC[k];
      }
    }
  }

  // output
  cout << ans << endl;
  return 0;

}