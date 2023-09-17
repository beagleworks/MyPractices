// ABC319B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  // solve
  vector<int> jj;
  for (int i=1; i<=9; i++) {
    if (n % i == 0) {
      jj.emplace_back(i);
    }
  }

  for (int i=0; i<=n; i++) {
    int c = -1;
    for (auto j : jj) {
      if (i % (n/j) == 0) {
        c = j;
        break;
      }
    }
    if (c == -1) cout << "-";
    else cout << c;
  }

  // output
  cout << endl;
  return 0;

}