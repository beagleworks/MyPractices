// ABC321A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  string n;
  cin >> n;

  // solve
  bool ans = true;
  for (int i=1; i<n.size(); i++) {
    if (n[i] >= n[i-1]) ans = false;
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}