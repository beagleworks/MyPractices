// ABC298C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, q;
  cin >> n >> q;

  // solve
  vector<multiset<int>> V(n+1);
  vector<set<int>> VC(2*100005);
  for (int i=0; i<q; i++) {
    int k, x;
    cin >> k >> x;
    if (k == 1) {
      int y;
      cin >> y;

      V[y].emplace(x);
      VC[x].emplace(y);
    }
    else if (k == 2) {
      for (auto e : V[x]) cout << e << ' ';
      cout << endl;
    }
    else {
      for (auto e : VC[x]) cout << e << ' ';
      cout << endl;
    }
  }

  return 0;

}