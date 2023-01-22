// ARC154A

#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define mint modint998244353
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

mint stomint(string s) {
  mint rest = 0;
  for (char c : s) {
    mint v = c - '0';
    rest = rest * 10 + v;
  }

  return rest;
}

int main(){

  // input
  long long n;
  string a, b;
  cin >> n >> a >> b;

  // solve
  for (int i=0; i<n; i++) {
    if (a[i] > b[i]) swap(a[i],b[i]);
  }
  
  mint aa = stomint(a);
  mint bb = stomint(b);
  mint ans = aa * bb;

  // output
  cout << ans.val() << endl;
  return 0;

}