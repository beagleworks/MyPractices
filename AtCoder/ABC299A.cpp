// ABC299A

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
  bool in = false;
  for (auto c : s) {
    if (c == '|') {
      if (in) break;
      in = true;
    }
    if (in && c == '*') ans = true;
  }

  // output
  cout << (ans ? "in" : "out") << endl;
  return 0;

}