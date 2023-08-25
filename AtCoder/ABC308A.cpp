// ABC308A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int bs = 0;
  for (int i=0; i<8; i++) {
    int s;
    cin >> s;
    if (s % 25 == 0 && 100 <= s && s <= 675 && bs <= s) {
      bs = s;
    }
    else {
      cout << "No" << endl;
      return 0;
    }
  }

  // output
  cout << "Yes" << endl;
  return 0;

}