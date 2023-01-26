// CODE-FESTIVAL-2016_qual_A_B

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

  vector<int> A(n);
  for (auto &a : A) {
    cin >> a;
    a--;
  }

  // solve
  int ans = 0;
  for (int i=0; i<n; i++) {
    if (A[A[i]] == i) ans++;
  }

  // output
  cout << ans/2 << endl;
  return 0;

}