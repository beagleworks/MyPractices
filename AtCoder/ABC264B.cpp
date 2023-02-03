// ABC264B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int r, c;
  cin >> r >> c;
  r--, c--;

  // solve
  int d = max(abs(7-r), abs(7-c));

  // output
  cout << (d%2 == 1 ? "black" : "white") << endl;
  return 0;

}