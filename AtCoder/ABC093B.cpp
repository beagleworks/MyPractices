// ABC093B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int a, b, k;
  cin >> a >> b >> k;

  // output
  set<int> ans;
  for (int i=a; i<=b&&i-a<k; i++) {
    ans.emplace(i);
  }
  for (int i=b; a<=i&&i>b-k; i--) {
    ans.emplace(i);
  }

  for (auto x : ans) cout << x << endl;
  return 0;

}