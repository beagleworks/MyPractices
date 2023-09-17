// ABC202C

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

  vector<int> A(n), B(n), C(n);
  for (auto &a : A) cin >> a;
  for (auto &a : B) cin >> a;
  for (auto &a : C) cin >> a;

  // solve
  long ans = 0;
  vector AA(100001, 0l);
  for (auto a : A) AA[a]++;
  vector BC(100001, 0l);
  for (auto c: C) BC[B[c-1]]++;

  // output
  for (int i=1; i<=100000; i++) {
    ans += AA[i] * BC[i];
  }
  cout << ans << endl;
  return 0;

}