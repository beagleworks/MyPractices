// ABC308C

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

  // solve
  vector<pair<long double, int>> ans;
  for (int i=0; i<n; i++) {
    int a, b;
    cin >> a >> b;
    long double c = (long double)a / (a+b);
    ans.emplace_back(-c, i);
  }

  // output
  sort(ALL(ans));
  for (auto a : ans) {
    cout << a.second + 1 << '\n';
  }
  return 0;

}