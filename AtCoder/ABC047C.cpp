// ABC047C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string s;
  cin >> s;

  // solve
  string t = "";
  char pre = 0;
  for (auto c : s) {
    if (c != pre) {
      t += c;
      pre = c;
    }
  }

  // output
  cout << (int)t.size() - 1 << endl;
  return 0;

}