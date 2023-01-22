// ABC050B

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

  vector<int> T(n);
  int sum = 0;
  for (auto &t : T) {
    cin >> t;
    sum += t;
  }

  int m;
  cin >> m;

  // output
  for (int i=0; i<m; i++) {
    int p, x;
    cin >> p >> x;
    p--;
    cout << sum- T[p] + x << endl;
  }

  return 0;

}