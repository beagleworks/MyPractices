// ABC083A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  // output
  cout << (a+b > c+d ? "Left" : a+b == c+d ? "Balanced" : "Right") << endl;
  return 0;

}