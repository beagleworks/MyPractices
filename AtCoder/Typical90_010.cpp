// Typical90_010

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n;
  cin >> n;
  vector<pair<int, int>> M;
  for (int i=0; i<n; i++) {
    int c, p;
    cin >> c >> p;
    M.emplace_back(c, p);
  }

  int q;
  cin >> q;
  vector<pair<int, int>> D;
  for (int i=0; i<q; i++) {
    int l, r;
    cin >> l >> r;
    l--, r--;
    D.emplace_back(l, r);
  }

  // solve
  vector<int> C1(n), C2(n);
  int cnt = 0;
  for (auto [c, p]: M) {
    int c1 = 0, c2 = 0;
    if (c == 1) c1 = p;
    else c2 = p;

    if (cnt == 0) {
      C1[0] = c1;
      C2[0] = c2;
    }
    else {
      C1[cnt] = C1[cnt-1] + c1;
      C2[cnt] = C2[cnt-1] + c2; 
    }

    cnt++;
  }

  // output
  for (auto [l, r]: D) {
    if (l == 0) cout << C1[r] << " " << C2[r] << endl;
    else cout << C1[r] - C1[l-1] << " " << C2[r] - C2[l-1] << endl;
  }
  return 0;

}