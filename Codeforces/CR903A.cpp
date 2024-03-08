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

void solve(){
  int n, m;
  string x, s;
  cin >> n >> m >> x >> s;

  int ans = 0;
  while ((int)x.size() < 50) {
    for (int i=0; i<(int)x.size(); i++) {
      string t = x.substr(i, m);
      if (t == s) {
        cout << ans << endl;
        return;
      }
    }
    
    x += x;
    ans++;
  }

  cout << -1 << endl;
  return;
}

int main(){

  input();

  for (int i=0; i<t; i++) solve();

  return 0;

}