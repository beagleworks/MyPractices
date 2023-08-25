// ABC315C

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

  vector<pair<int, int>> SF;
  for (int i=0; i<n; i++) {
    int f, s;
    cin >> f >> s;
    SF.emplace_back(s, f);
  }

  // solve
  sort(ALL(SF), greater<pair<int, int>>());
  int d = SF[0].first, aj = SF[0].second;
  int ans1 = 0, ans2 = 0;
  for (int i=1; i<n; i++) {
    if (SF[i].first == d) {
      if (SF[i].second == aj) ans1 = d + d/2;
      else ans2 = d*2;
    }

    if (!ans1 && SF[i].second == aj) {
      ans1 = d + SF[i].first / 2;
    }
    if (!ans2 && SF[i].second != aj) {
      ans2 = d + SF[i].first;
    }

    if (ans1 && ans2) {
      cout << max(ans1, ans2) << endl;
      return 0;
    }
  }

  cout << max(ans1, ans2) << endl;
  return 0;
}