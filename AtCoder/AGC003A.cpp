// AGC003A

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
  set<char> st;
  for (auto c : s) {
    st.emplace(c);
  }
  set<char> ok1 = {'N', 'S'}, ok2 = {'E', 'W'};

  // output
  cout << (st.size() == 4 || st == ok1 || st == ok2 ? "Yes" : "No") << endl;
  return 0;

}