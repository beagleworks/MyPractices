// ABC285C

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
  long long ans = 0;
  long long n = s.size();
  for (int i=0; i<n; i++) {
    ans += (long long)powl(26, n-1-i);
  }
  for (int i=0; i<n; i++) {
    ans += (long long)powl(26, n-1-i) * (s[i] - 'A');
  }

  // output
  cout << ans << endl;
  return 0;

}