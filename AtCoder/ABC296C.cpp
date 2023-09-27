// ABC296C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n, x;
  cin >> n >> x;

  set<int> st;
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    st.emplace(a);
  }

  // solve
  bool ans = false;
  for (auto a : st) {
    int diff = a - x;
    if (st.count(diff)) ans = true;
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}