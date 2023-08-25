// ABC313C

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
  int64_t sum = 0;
  for (auto &a : A) {
    cin >> a;
    sum += a;
  }

  // solve
  // sort(ALL(A));
  int64_t avr_d = sum / n, avr_u = (sum+n-1) / n;
  int64_t up = 0, down = 0;
  for (int i=0; i<n; i++) {
    if (A[i] <= avr_d) up += avr_d - A[i];
    else down += A[i] - avr_u;
  }

  // output
  cout << max(up, down) << endl;
  return 0;

}