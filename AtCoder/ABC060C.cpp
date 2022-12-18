// ABC060C(ARC073A)

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, t;
  cin >> n >> t;

  vector<int> T(n);
  for (auto &p : T) cin >> p;

  // solve
  int ans = 0, pre = -1;
  for (auto p : T) {
    if (pre == -1) ans += t;
    else {
      if (p < pre+t) ans += p-pre;
      else ans += t;
    }
    pre = p;
  }

  // output
  cout << ans << endl;
  return 0;

}