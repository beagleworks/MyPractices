// ABC150B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  string s;
  cin >> n >> s;

  // solve
  int ans = 0;
  for (int i=2; i<n; i++) {
    if (s.substr(i-2, 3) == "ABC") ans++;
  }

  // output
  cout << ans << endl;
  return 0;

}