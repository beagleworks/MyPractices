// Typical90_033

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int h, w;
  cin >> h >> w;

  // solve
  int ans = ((h+1)/2) * ((w+1)/2);

  // output
  cout << (h == 1 ? w : w == 1 ? h : ans) << endl;
  return 0;

}