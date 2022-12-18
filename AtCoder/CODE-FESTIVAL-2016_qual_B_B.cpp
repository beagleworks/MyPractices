// CODE-FESTIVAL-2016_qual_B_B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, a, b;
  cin >> n >> a >> b;

  // solve
  int pass = 0, pf = 0;
  for (int i=0; i<n; i++) {
    char c;
    cin >> c;
    if (c == 'a' && pass < a+b) {
      cout << "Yes" << endl;
      pass++;
    }
    else if (c == 'b' && pass < a+b && pf < b) {
      cout << "Yes" << endl;
      pass++;
      pf++;
    }
    else cout << "No" << endl;
  }

  return 0;

}