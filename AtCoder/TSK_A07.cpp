// A07

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int d, n;
  cin >> d >> n;

  // solve
  vector<int> days(d, 0);
  for (int i=0; i<n; i++) {
    int s, e;
    cin >> s >> e;
    s--;
    days[s]++;
    days[e]--;
  }

  // output
  int ans = 0;
  for (int i=0; i<d; i++) {
    ans += days[i];
    cout << ans << endl;
  }
  return 0;

}