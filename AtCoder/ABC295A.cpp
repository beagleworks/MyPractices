// ABC295A

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
  bool ans = false;
  set<string> st = {"and", "not", "that", "the", "you"};
  for (int i=0; i<n; i++) {
    string s;
    cin >> s;
    auto x = st;
    x.emplace(s);
    if (x.size() == 5) ans = true;
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}