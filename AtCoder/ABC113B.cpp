// ABC113B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, t, a;
  cin >> n >> t >> a;
  t *= 1000;
  a *= 1000;

  vector<int> H(n);
  for (auto &h : H) {
    cin >> h;
  }

  // solve
  vector<int> T = H;
  for (auto &x : T) {
    x = t - x * 6; 
  }

  int ans = -1, diff = INF;
  for (int i=0; i<n; i++) {
    if (abs(T[i]-a) < diff) {
      diff = abs(T[i]-a);
      ans = i+1;
    }
  }

  // output
  cout << ans << endl;
  return 0;

}