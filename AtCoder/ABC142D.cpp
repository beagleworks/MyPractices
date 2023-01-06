// ABC142D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

// 素数のみ列挙した素因数分解
set<long long> pf(long long n) {
  set<long long> res;
  long long x = n;
  for (long long i=2; i*i<=n; i++) {
    if (x%i!=0) continue;
    while (x%i == 0) x /= i;
    res.emplace(i);
  }

  if (x != 1) res.emplace(x);
  return res;
}

int main(){

  // input
  long long a, b;
  cin >> a >> b;

  // solve
  set<long long> sa, sb, sab;
  sa = pf(a), sb = pf(b);
  set_intersection(ALL(sa), ALL(sb), inserter(sab, sab.end()));

  // output
  cout << sab.size() + 1 << endl;
  return 0;

}