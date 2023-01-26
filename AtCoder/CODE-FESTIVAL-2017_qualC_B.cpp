// CODE-FESTIVAL-2017_qualC_B

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

  // solve
  int ans = 1;
  for (int i=0; i<n; i++) {
    ans *= 3;
  }

  int exc = 1;
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    if (a % 2 == 0) exc *= 2;
  }

  // output
  cout << ans-exc << endl;
  return 0;

}