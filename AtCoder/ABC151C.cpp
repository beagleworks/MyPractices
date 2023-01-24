// ABC151C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  // solve
  vector AS(n, false);
  vector PN(n, 0);

  for (int i=0; i<m; i++) {
    int p;
    string s;
    cin >> p >> s;
    p--;

    if (s == "AC") {
      AS[p] = true;
    }
    else {
      if (!AS[p]) PN[p]++;
    }
  }

  // output
  int ac = 0, pn = 0;
  for (int i=0; i<n; i++) {
    if (AS[i]) {
      ac++;
      pn += PN[i];
    }
  }
  cout << ac << " " << pn << endl;
  return 0;

}