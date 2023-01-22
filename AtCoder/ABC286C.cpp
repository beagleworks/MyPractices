// ABC286C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  long long a, b;
  string s;
  cin >> n >> a >> b >> s;

  // solve  
  long long ans = LINF;
  for (int r=0; r<n; r++) {
    long long cost = a*r;
    long long bn = 0;
    for (int i=0; i<n/2; i++) {
      if (i == n-1-i) continue;
      if (s[i] != s[n-1-i]) bn++; 
    }
    ans = min(cost+b*bn, ans);
    s = s.substr(1) + s.front();
  }


  // output
  cout << ans << endl;
  return 0;

}