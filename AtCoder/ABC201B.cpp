// ABC201B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  // solve
  string highest = "", nxt = "";
  int h1 = 0, h2 = 0;

  for (int i=0; i<n; i++) {
    string s;
    int t;
    cin >> s >> t;
    if (t > h1) {
      nxt = highest, h2 = h1;
      highest = s, h1 = t;
    }
    else if (t > h2) {
      nxt = s, h2 = t;
    }
  }

  // output
  cout << nxt << endl;
  return 0;

}