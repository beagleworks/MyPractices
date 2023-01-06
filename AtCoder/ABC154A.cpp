// ABC154A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string s, t, u;
  int a, b;
  cin >> s >> t >> a >> b >> u;

  // solve
  if (s == u) a--;
  else b--; 

  // output
  cout << a << " " << b << endl;
  return 0;

}