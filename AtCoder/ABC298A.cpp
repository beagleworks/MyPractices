// ABC298A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  string s;
  cin >> n >> s;

  // solve
  bool ans = false;
  for (auto c : s) {
    if (c == 'o') ans = true;
    if (c == 'x') {
      ans = false;
      break;
    }
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}