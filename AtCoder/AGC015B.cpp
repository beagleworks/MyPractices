// AGC015B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string s;
  cin >> s;

  // solve
  long long len = s.size();
  long long ans = 0;
  for (long long i=0; i<(long long)s.size(); i++) {
    ans += len-1;
    ans += (s[i] == 'U' ? i : len-1-i);
  }

  // output
  cout << ans << endl;
  return 0;

}