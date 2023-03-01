// ABC021B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, a, b, k;
  cin >> n >> a >> b >> k;
  a--, b--;

  // solve
  map<int, bool> ans;
  bool f = true;
  ans[a] = true, ans[b] = true;
  for (int i=0; i<k; i++) {
    int p;
    cin >> p;
    p--;
    if (ans[p]) f = false;
    ans[p] = true;
  }

  // output
  cout << (f ? "YES" : "NO") << endl;
  return 0;

}