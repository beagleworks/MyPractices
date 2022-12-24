// ABC063C

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
  vector<int> S(n);
  int sum = 0;
  for (auto &s : S) {
    cin >> s;
    sum += s;
  }

  // solve
  int ans = 0;
  if (sum % 10 != 0) ans = sum;
  else {
    sort(ALL(S));
    for (auto s : S) {
      if (s % 10 != 0) {
        ans = sum - s;
        break;
      }
    }
  }

  // output
  cout << ans << endl;
  return 0;

}