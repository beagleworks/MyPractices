// AGC002A

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
  if (a >= 1) cout << "Positive" << endl;
  else if (a <= 0 && 0 <= b) cout << "Zero" << endl;
  else if ((b-a+1) % 2 == 1) cout << "Negative" << endl;
  else cout << "Positive" << endl;

  return 0;

}