// ABC098C(ARC098A)

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
  int e = count(ALL(s), 'E'), w = 0;
  if (s[0] == 'E') e--;
  int ans = e;
  for (int i=1; i<n; i++) {
    if (s[i] == 'E') e--;
    if (s[i-1] == 'W') w++;
    ans = min(ans, e+w);
  }

  // output
  cout << ans << endl;
  return 0;

}