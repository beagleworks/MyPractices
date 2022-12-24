// Typical90_007

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
  for (auto &a : A) cin >> a;
  int q;
  cin >> q;
  vector<int> B(q);
  for (auto &b : B) cin >> b;

  // solve
  sort(ALL(A));

  for (int i=0; i<q; i++) {
    auto itr = lower_bound(ALL(A), B[i]);
    int ans;
    if (*itr == B[i]) ans = 0;
    else if (itr == A.end()) ans = abs(*(--itr)-B[i]);
    else if (itr == A.begin()) ans = abs(*itr-B[i]);
    else ans = min(abs(*itr-B[i]), abs(*(itr-1)-B[i]));
    
    cout << ans << endl;
  }

  return 0;

}