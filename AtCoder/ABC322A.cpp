// ABC322A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  string s;
  cin >> n >> s;

  // solve
  for (int i=0; i<n; i++) {
    string t = s.substr(i, 3);
    if (t == "ABC") {
      cout << i+1 << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;

}