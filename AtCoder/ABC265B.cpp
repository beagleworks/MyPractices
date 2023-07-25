// ABC265B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  int64_t t;
  cin >> n >> m >> t;

  vector<int> A(n-1);
  for (auto &a : A) cin >> a;
  vector<int> B(n-1, 0);
  for (int i=0; i<m; i++) {
    int x, y;
    cin >> x >> y;
    B[x-2] = y;
  }

  // solve
  bool ans = true;
  for (int i=0; i<n-1; i++) {
    if (t <= A[i]) ans = false;
    t -= A[i];
    t += B[i];
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}