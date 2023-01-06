// ABC054A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int a, b;
  cin >> a >> b;

  // solve
  if (a == b) cout << "Draw" << endl;
  else if (a == 1) cout << "Alice" << endl;
  else if (b == 1) cout << "Bob" << endl; 
  else cout << (a > b ? "Alice" : "Bob") << endl;

  return 0;

}