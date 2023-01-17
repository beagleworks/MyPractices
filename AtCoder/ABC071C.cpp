// ABC071C(ARC081A)

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

  vector<long long> A(n);
  for (auto &a : A) cin >> a;

  // solve
  long long ans = 0;
  sort(ALL(A), greater<long long>());
  long long pre = -1;
  for (auto &a : A) {
    if (pre == a) {
      if (ans) {
        ans *= a;
        cout << ans << endl;
        return 0;
      }
      else {
        ans = a;
        pre = -1;
      }
    }

    else pre = a;
  }

  cout << 0 << endl;
  return 0;
  
}