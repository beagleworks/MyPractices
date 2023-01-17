// ABC062A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int x, y;
  cin >> x >> y;

  // solve
  set<int> A = {1, 3, 5, 7, 8, 10, 12}, B = {4, 6, 9, 11};

  // output
  if (x == 2 || y == 2) cout << "No" << endl;
  else cout << ((A.count(x) && A.count(y)) || (B.count(x) && B.count(y)) ? "Yes" : "No") << endl;
  return 0;

}