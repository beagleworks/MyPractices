#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
using ll = long long;
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int t;
void input(){
  cin >> t;
}

vector<int> solve(){
  vector<int> ret(t);
  for (int ind = 0; ind < t; ind++) {
    string s;
    cin >> s;

    int now = 1;
    for (int i=0; i<4; i++) {
      int d = s[i] - '0';
      if (!d) d = 10;
      ret[ind] += abs(d - now) + 1;
      now = d;
    }
  }

  return ret;
}

int main(){

  input();

  auto ans = solve();
  for (int i=0; i<t; i++) {
    cout << ans[i] << '\n';
  }

  return 0;

}