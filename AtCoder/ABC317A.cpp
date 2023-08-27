// ABC317A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, h, x;
  cin >> n >> h >> x;

  // solve
  for (int i=0; i<n; i++) {
    int p;
    cin >> p;
    if (h+p >= x) {
      cout << i+1 << endl;
      return 0;
    }
  }

}