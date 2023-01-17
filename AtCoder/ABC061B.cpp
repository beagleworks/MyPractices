// ABC061B

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
  for (int i=0; i<m; i++) {
    int a, b;
    cin >> a >> b;
    mp[a]++, mp[b]++;
  }

  // output
  for (int i=1; i<=n; i++) {
    cout << mp[i] << endl;
  }

  return 0;

}