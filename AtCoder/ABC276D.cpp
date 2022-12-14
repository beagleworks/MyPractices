// ABC276D

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

  vector<int> A(n);
  for (auto& a: A) cin >> a;

  // solve
  vector D2(n, 0), D3(n, 0);
  int q = -1;
  for (int i=0; i<n; i++) {
    int a = A[i];
    while (a % 2 == 0) {
      a /= 2;
      D2[i]++;
    }
    while (a % 3 == 0) {
      a /= 3;
      D3[i]++;
    }

    if (q == -1) q = a;
    else if (a != q) {
      cout << -1 << endl;
      return 0;
    }
    
  }

  sort(ALL(D2));
  sort(ALL(D3));
  int md2 = D2[0], md3 = D3[0];

  int ans = 0;
  for (auto d: D2) ans += d - md2;
  for (auto d: D3) ans += d - md3;

  // output
  cout << ans << endl;
  return 0;

}