// AGC035A

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
  set<int> st;
  map<int, int> mp;
  for (auto &a : A) {
    cin >> a;
    st.emplace(a);
    mp[a]++;
  }

  // solve
  bool ans = false;
  if (st.size() == 1 && mp[0]) ans = true;
  if (st.size() == 2 && mp[0] == n / 3 && n % 3 == 0) ans = true;
  if (st.size() == 3) {
    vector<int> V;
    for (auto e : st) V.emplace_back(e);
    if (mp[V[0]] == mp[V[1]] && mp[V[1]] == mp[V[2]] && (V[0]^V[1]^V[2]) == 0) {
      ans = true;
    }
  }  

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}