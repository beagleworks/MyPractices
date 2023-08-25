// ABC304A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  queue<pair<string, int>> q;
  int m = INF;
  for (int i=0; i<n; i++) {
    string s;
    int a;
    cin >> s >> a;
    q.emplace(s, a);
    m = min(m, a);
  }

  // solve
  while (true) {
    auto [x, y] = q.front();
    q.pop();
    if (y == m) {
      cout << x << endl;
      break;
    }
    else {
      q.emplace(x, y);
    }
  }

  while (!q.empty()) {
    auto [x, y] = q.front();
    q.pop();
    cout << x << endl;
  }

  return 0;

}