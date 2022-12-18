// ABC274D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, x, y;
  cin >> n >> x >> y;

  vector<int> A(n);
  for (auto &a: A) cin >> a;

  // solve
  unordered_set<int> stx, sty;
  stx.emplace(A[0]+5000);
  sty.emplace(5000);

  unordered_set<int> *target = &sty;
  for (int i=1; i<n; i++) {
    unordered_set<int> nst;
    for (auto a: *target) {
      nst.emplace(a+A[i]);
      nst.emplace(a-A[i]);
    }

    swap(nst, *target);

    if (i%2 == 1) target = &stx;
    else target = &sty;
    }

  // output
  cout << (stx.count(x+5000) && sty.count(y+5000) ? "Yes" : "No") << endl;

  return 0;

}