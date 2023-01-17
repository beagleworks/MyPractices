// ABC124B

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

  vector<int> H(n);
  for (auto &h : H) cin >> h;

  // solve
  int ans = 0;
  for (int i=0; i<n; i++) {
    bool f = true;
    for (int j=0; j<i; j++) {
      if (H[j] > H[i]) f = false; 
    }
    if (f) ans++;
  }

  // output
  cout << ans << endl;
  return 0;

}