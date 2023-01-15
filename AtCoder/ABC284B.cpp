// ABC284B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int t;
  cin >> t;

  // solve
  for (int i=0; i<t; i++) {
    int n;
    cin >> n;
    int ans = 0;
    for (int j=0; j<n; j++) {
      int a;
      cin >> a;
      if (a%2) ans++;
    }
    cout << ans << endl;
  }

  return 0;

}