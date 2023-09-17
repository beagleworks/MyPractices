// ABC168A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  // output
  if (n % 10 == 3) cout << "bon" << endl;
  else if (n % 10 <= 1 || n % 10 == 6 || n % 10 == 8) cout << "pon" << endl;
  else cout << "hon" << endl;
  return 0;

}