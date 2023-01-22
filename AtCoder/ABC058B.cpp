// ABC058B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string o, e;
  cin >> o >> e;

  // solve
  for (int i=0; i<(int)e.size(); i++) {
    cout << o[i] << e[i];
  }

  if (e.size() != o.size()) cout << o.back();

  cout << endl;
  return 0;

}