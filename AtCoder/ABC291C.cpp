// ABC291C

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
  set<pair<int, int>> st;
  int x = 0, y = 0;
  st.emplace(x, y);
  bool ans = false;
  for (int i=0; i<n; i++) {
    switch (s[i]) {
    case 'R':
      x++;
      break;
    case 'L':
      x--;
      break;
    case 'U':
      y++;
      break;
    case 'D':
      y--;
      break;
    default:
      break;
    }

    if (st.count({x, y})) {
      ans = true;
      break;
    }
    st.emplace(x, y);
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}