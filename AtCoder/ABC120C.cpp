// ABC120C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string s;
  cin >> s;

  // solve
  int n = s.size();
  stack<char> st;
  for (auto c : s) {
    if (st.empty() || st.top() == c) st.emplace(c);
    else st.pop();
  }

  // output
  cout << n - (int)st.size() << endl;
  return 0;

}

// min(0の個数, 1の個数) * 2個