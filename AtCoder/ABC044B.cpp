// ABC044B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string w;
  cin >> w;

  // solve
  bool ans = true;
  for (auto c : w) {
    if (count(ALL(w), c) % 2 == 1) ans = false;
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}