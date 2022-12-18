// SUMITRUST2019_B

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

  // solve
  for (int i=1; i<=50000; i++) {
    int p = i*1.08;
    if (p == n) {
      cout << i << endl;
      return 0;
    }
  }

  // output
  cout << ":(" << endl;
  return 0;

}