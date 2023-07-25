// ABC292B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, q;
  cin >> n >> q;

  // solve
  vector v(n, 0);
  for (int i=0; i<q; i++) {
    int e, target;
    cin >> e >> target;
    target--;
    if (e == 1) {
      v[target]++;
    }
    else if (e == 2) {
      v[target] = 2;
    }
    else cout << (v[target] == 2 ? "Yes" : "No") << endl;  
  }

  return 0;

}