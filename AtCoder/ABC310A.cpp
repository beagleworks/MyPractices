// ABC310A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, p, q;
  cin >> n >> p >> q;

  // solve
  int d = INF;
  for (int i=0; i<n; i++) {
    int x;
    cin >> x;
    d = min(d, x);
  }

  // output
  cout << min(p, q+d) << endl;
  return 0;

}