// ABC150C

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

  vector<int> P(n), Q(n);
  for (auto &p : P) cin >> p;
  for (auto &q : Q) cin >> q;

  // solve
  int ans = -1;

  vector<int> vb(n);
  iota(ALL(vb), 1);
  int cnt = 0;
  if (P == Q) {
    cout << 0 << endl;
    return 0;
  }

  do{
    if (P == vb || Q == vb) {
      if (ans == -1) ans = cnt;
      else ans = abs(ans-cnt);
    }
    cnt++;
  }
  while(next_permutation(ALL(vb)));

  // output
  cout << ans << endl;
  return 0;

}