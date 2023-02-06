// ABC288B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, k;
  cin >> n >> k;

  // solve
  set<string> st;
  for (int i=0; i<k; i++) {
    string s;
    cin >> s;
    st.emplace(s);
  }

  // output
  for (auto x : st) {
    cout << x << endl;
  }

  return 0;

}