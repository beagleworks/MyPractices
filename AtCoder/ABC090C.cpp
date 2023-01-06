// ABC090C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long n, m;
  cin >> n >> m;

  // solve
  if (n == 1 && m == 1) cout << 1 << endl;
  else if (n == 1 || m == 1) cout << max(n, m) - 2 << endl;
  else cout << n*m-n*2-m*2+4 << endl;
  
  return 0;

}