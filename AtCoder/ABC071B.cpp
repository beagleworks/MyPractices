// ABC071B

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
  vector<int> ans(26, 0);
  for (auto c : s) ans[c-'a']++;

  // output
  for (int i=0; i<26; i++) {
    if (ans[i] == 0) {
      cout << char(i+'a') << endl;
      return 0;
    }
  }

  cout << "None" << endl;
  return 0;

}