// ARC004B

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
  int mx = 0, mn;
  vector<int> D(n);
  for (int i=0; i<n; i++) {
    int d;
    cin >> d;
    mx += d;
    D[i] = d;
  }

  sort(ALL(D), greater<int>());
  int dx = mx - D[0];
  mn = max(D[0] - dx, 0);

  // output
  cout << mx << endl;
  cout << mn << endl;
  return 0;

}