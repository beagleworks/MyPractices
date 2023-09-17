// ABC318B

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

  // solve
  vector field(101, vector<int>(101, 0));
  int ans = 0;
  for (int i=0; i<n; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for (int u=a; u<b; u++) {
      for (int v=c; v<d; v++) {
        if (!field[u][v]) {
          field[u][v] = 1;
          ans++;
        }
      }
    }
  }

  // output
  cout << ans << endl;
  return 0;

}