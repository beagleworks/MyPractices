// ABC028B

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
  map<char, int> ans;
  for (auto c : s) {
    ans[c]++;
  }

  // output
  for (char x = 'A'; x <= 'F'; x++) {
    cout << ans[x];
    if (x != 'F') cout << " ";
    else cout << '\n';
  }
  
  return 0;

}