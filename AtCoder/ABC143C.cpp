// ABC143C

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
  string ans;
  char pre = 0;
  for (int i=0; i<n; i++) {
    if (s[i] != pre) {
      ans += s[i];
      pre = s[i];
    }
  }

  // output
  cout << ans.size() << endl;
  return 0;

}