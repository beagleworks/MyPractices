// ABC306C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  vector<int> A(3*n);
  for (auto &a : A) cin >> a;

  // solve
  map<int, int> mp;
  for (int i=0; i<3*n; i++) {
    mp[A[i]]++;
    if (mp[A[i]] == 2) cout << A[i] << "\n";
  }

  return 0;

}