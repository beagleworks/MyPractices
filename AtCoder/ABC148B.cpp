// ABC148B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  string s, t;
  cin >> n >> s >> t;

  // solve
  for (int i=0; i<2*n; i++) {
    if (i%2==0) cout << s[i/2];
    else cout << t[i/2];
  }

  // output
  cout << endl;
  return 0;

}