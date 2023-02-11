// ABC111C

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

  // solve
  vector<int> VA, VB;
  map<int, int> x, y;
  for (int i=0; i<n; i++) {
    int v;
    cin >> v;
    if (i % 2 == 0) {
      VA.emplace_back(v);
      x[v]++;
    }
    else {
      VB.emplace_back(v);
      y[v]++;
    }
  }

  int emkey = 0, emval = 0, emval2 = 0;
  int omkey = 0, omval = 0, omval2 = 0;
  for (auto [k, v] : x) {
    if (v > emval) {
      emval2 = emval;
      emkey = k, emval = v;      
    } 
    else if (v > emval2) {
      emval2 = v;
    }
  }

  for (auto [k, v] : y) {
    if (v > omval) {
      omval2 = omval;
      omkey = k, omval = v;      
    } 
    else if (v > omval2) {
      omval2 = v;
    }
  }

  int ans = (emkey != omkey ? n-(emval+omval) : n-max(emval+omval2, emval2+omval));

  // output
  cout << ans << endl;
  return 0;

}