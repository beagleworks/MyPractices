// ABC157C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  // solve
  map<int, int> mp;
  bool ans = true;
  for (int i=0; i<m; i++) {
    int s, c;
    cin >> s >> c;
    if (!c) c = 10;

    if (!mp[s] || mp[s] == c) mp[s] = c;
    else {
      ans = false;
      break;
    }
  }

  if (!mp[1]) {
    if (n == 1) mp[1] = 0;
    else mp[1] = 1;
  }
  else if (mp[1] == 10) {
    if (n == 1) mp[1] = 0;
    else ans = false;
  }
  for (int i=2; i<=n; i++) {
    if (!mp[i]) mp[i] = 0;
  }

  // output
  if (ans) for (auto [_, x] : mp) {
    if (x == 10) cout << 0;
    else cout << x;
  }
  else cout << -1;
  cout << endl;
  return 0;

}

// 愚直に0から全探索したほうが早い