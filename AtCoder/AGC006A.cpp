// ABC006A

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
  int ans = n*2;
  int mx = 0;
  for (int i=1; i<=n; i++) {
    bool f = true;
    for (int j=0; j<i; j++) {
      if (s[n-i+j] != t[j]) f = false;
    }
    if (f) mx = i;
    
  }

  // output
  cout << ans-mx << endl;
  return 0;

}