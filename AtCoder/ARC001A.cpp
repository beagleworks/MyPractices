// ARC001A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  string s;
  cin >> n >> s;

  // solve
  vector<int> V(4, 0);
  for (auto c : s) V[c-'1']++; 

  // output
  cout << *max_element(ALL(V)) << " " << *min_element(ALL(V)) << endl;
  return 0;

}