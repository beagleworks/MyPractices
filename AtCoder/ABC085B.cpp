// ABC085B

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
  vector<int> D(n);
  for (auto &d : D) cin >> d;

  // solve
  sort(ALL(D));
  int ans = 0, cur = -1;
  for (auto d : D) {
    if (d > cur) ans++;
    cur = d;
  }

  // output
  cout << ans << endl;
  return 0;

}