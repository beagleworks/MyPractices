// ABC318C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, d, p;
  cin >> n >> d >> p;

  vector<int> F(n);
  for (auto &a : F) cin >> a;

  // solve
  sort(ALL(F), greater());

  long ans = 0, sum = 0;
  int cnt = 0;
  for (int i=0; i<n; i++) {
    sum += F[i];
    cnt++;
    if (cnt == d || i == n-1) {
      ans += min((long)p, sum);
      sum = 0;
      cnt = 0;
    }
  }

  // output
  cout << ans << endl;
  return 0;

}
