// ABC028C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  vector<int> V(5);
  for (auto &v : V) cin >> v;

  // solve
  set<int> ans;
  for (int i=0; i<5; i++) {
    for (int j=0; j<5; j++) {
      for (int k=0; k<5; k++) {
        if (i==j || j==k || k==i) continue;
        ans.emplace(V[i]+V[j]+V[k]);
      }
    }
  }

  // output
  auto itr = ans.rbegin();
  itr++;
  itr++;
  cout << *itr << endl;
  return 0;

}