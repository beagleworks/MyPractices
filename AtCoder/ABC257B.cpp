// ABC257B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, k, q;
  cin >> n >> k >> q;

  vector<int> field(n, 0);
  for (int i=1; i<=k; i++) {
    int a;
    cin >> a;
    a--;
    field[a] = i;
  }

  // solve
  for (int i=0; i<q; i++) {
    int l;
    cin >> l;
    for (int j=0; j<n; j++) {
      if (field[j] == l) {
        if (j == n-1) continue;
        if (field[j+1] != 0) continue;
        swap(field[j], field[j+1]);
        break;
      }
    }
  }

  // output
  for (int i=0; i<n; i++) if (field[i]) cout << i+1 << endl;
  return 0;

}