// ABC322C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  queue<int> q;
  for (int i=0; i<m; i++) {
    int a;
    cin >> a;
    q.emplace(--a);
  }

  // solve
  for (int i=0; i<n; i++) {
    while (1) {
      int d = q.front();
      if (d >= i) {
        cout << d - i << '\n';
        break;
      }
      else q.pop();
    }
  }

  return 0;

}