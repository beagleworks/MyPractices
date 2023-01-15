// ABC125D

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

  int cnt = 0;
  long long absmin = INF;
  long long sum = 0;
  for (int i=0; i<n; i++) {
    long long a;
    cin >> a;
    if (a < 0) cnt++;
    long long aba = abs(a);
    absmin = min(aba, absmin);
    sum += aba;
  }

  // solve
  long long ans = sum;
  if (cnt % 2 == 1) ans -= absmin * 2;

  // output
  cout << ans << endl;
  return 0;

}