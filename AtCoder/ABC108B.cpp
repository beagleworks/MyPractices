// ABC108B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  // solve
  int dx = x2 - x1, dy = y2 - y1;
  int x3 = x2 - dy, y3 = y2 + dx;
  int x4 = x1 - dy, y4 = y1 + dx;

  // output
  cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
  return 0;

}