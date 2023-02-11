// ABC085D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, h;
  cin >> n >> h;

  vector<int> weapon(n);
  int mx = 0;
  for (int i=0; i<n; i++) {
    int a, b;
    cin >> a >> b;
    weapon[i] = b;
    mx = max(mx, a);
  }

  // solve
  int ans = 0;
  sort(ALL(weapon), greater<int>());

  for (int i=0; i<n; i++) {
    if (weapon[i] > mx) {
      h -= weapon[i];
      ans++;
      if (h <= 0) {
        cout << ans << endl;
        return 0;
      }
    }
    else break;
  }
  
  ans += (h+mx-1)/mx;
  cout << ans << endl;
  return 0;

}