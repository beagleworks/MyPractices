// ABC290C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, k;
  cin >> n >> k;

  set<int> A;
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    A.emplace(a);
  }

  // solve
  int ans = 0;
  for (int i=0; i<k; i++) {
    if (A.count(i)) ans++;
    else break;
  }

  // output
  cout << ans << endl;
  return 0;

}