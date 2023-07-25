// ABC258A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int k;
  cin >> k;

  // solve
  int h = 0;
  if (k >= 60) {
    h++;
    k -= 60;
  }

  // output
  cout << 21+h << ":" << (k < 10 ? "0" : "") << to_string(k) << endl;
  return 0;

}