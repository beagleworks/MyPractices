// ABC294B

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
  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      int a;
      cin >> a;
      if (a == 0) cout << ".";
      else cout << char('A'+a-1);
    }
    cout << endl;
  }
  return 0;

}