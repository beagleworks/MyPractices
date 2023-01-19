// ABC272C

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

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  vector<int> E, O;
  for (auto a : A) {
    if (a % 2 == 0) E.emplace_back(a);
    else O.emplace_back(a);
  }
  
  sort(ALL(E), greater<int>());
  sort(ALL(O), greater<int>());

  int emax = (E.size() >= 2 ? E[0]+E[1] : 0);
  int omax = (O.size() >= 2 ? O[0]+O[1] : 0);

  // output
  cout << (emax+omax ? max(emax, omax) : -1) << endl;
  return 0;

}