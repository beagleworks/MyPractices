// CODE-FESTIVAL-2017_qual_B_B

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
  multiset<int> dst;
  for (int i=0; i<n; i++) {
    int d;
    cin >> d;
    dst.emplace(d);
  }
  
  int m;
  cin >> m;
  multiset<int> tst;
  for (int i=0; i<m; i++) {
    int t;
    cin >> t;
    tst.emplace(t);
  }

  // solve
  multiset<int> res;
  set_intersection(ALL(dst), ALL(tst), inserter(res, res.end()));

  // output
  cout << (res == tst ? "YES" : "NO") << endl;
  return 0;

}