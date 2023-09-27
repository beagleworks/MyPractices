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
    vector<int> H(n);
    int one = 0;
    for (auto &h : H) {
      cin >> h;
      if (h == 1) one++;
    }

    int ans = n - one/2;

    // output
    cout << ans << endl;
  }

  return 0;

}