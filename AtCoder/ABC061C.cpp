// ABC061C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  long long n, k;
  cin >> n >> k;

  // solve
  map<int, long long> mp;
  for (int i=0; i<n; i++) {
    int a, b;
    cin >> a >> b;
    mp[a] += b;
  }

  // output
  for (auto [ky, v] : mp) {
    k -= v;
    if (k <= 0) {
      cout << ky << endl;
      return 0;
    }
  }

}