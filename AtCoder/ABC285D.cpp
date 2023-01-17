// ABC285D

#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
using namespace atcoder;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  map<string, int> hash;
  vector<pair<string, string>> lst;
  int cnt = 0;
  for (int i=0; i<n; i++) {
    string a, b;
    cin >> a >> b;
    lst.emplace_back(a, b);
    if (!hash[a]) {
      hash[a] = cnt;
      cnt++;
    }
    if (!hash[b]) {
      hash[b] = cnt;
      cnt++;
    }
  }

  // solve
  dsu d(cnt);
  bool ans = true;
  for (auto [s, t] : lst) {
    if (d.same(hash[s], hash[t])) ans = false;
    d.merge(hash[s], hash[t]);
  }


  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}