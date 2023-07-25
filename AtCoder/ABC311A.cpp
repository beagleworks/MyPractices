// ABC311A

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

  string s;
  cin >> s;

  // solve
  bool A = false, B = false, C = false;
  for (int i=0; i<n; i++) {
    if (s[i] == 'A') A = true;
    else if (s[i] == 'B') B = true;
    else C = true;

    if (A && B && C) {
      cout << i+1 << endl;
      return 0;
    }
  }
}