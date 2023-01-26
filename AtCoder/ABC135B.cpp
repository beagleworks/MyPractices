// ABC135B

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

  vector<int> P(n);
  for (auto &p : P) cin >> p;

  // solve
  int cnt = 0;
  for (int i=0; i<n; i++) {
    if (P[i] != i+1) cnt++;
  }

  // output
  cout << (cnt <= 2 ? "YES" : "NO") << endl;
  return 0;

}