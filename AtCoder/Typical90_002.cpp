// Typical90_002

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n;
  cin >> n;

  // solve
  if (n % 2 == 1) return 0;

  vector<string> ans;
  for (int bit=0; bit < (1 << n); bit++){
    int sum = 0;
    string s = "";
    bool f = true;
    for (int i=0; i<n; i++) {
      if (bit & (1 << i)) {
        sum += 1;
        s += ")";
      }
      else {
        sum -= 1;
        s += "(";
      }
      if (sum > 0) {
        f = false;
        break;
      }
    }
    if (f && sum == 0) ans.emplace_back(s);
  }

  // output
  sort(ALL(ans));
  for (auto a: ans) cout << a << endl;
  return 0;

}