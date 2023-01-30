// ABC003B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string s, t;
  cin >> s >> t;

  // solve
  auto atcoder = [](char c){
    for (auto a : "atcoder") {
      if (c == a) return true;
    }
    return false;
  };

  for (int i=0; i<(int)s.size(); i++) {
    if (s[i] == t[i]) continue;
    if ((s[i] == '@' && atcoder(t[i])) || (t[i] == '@' && atcoder(s[i]))) continue;
    cout << "You will lose" << endl;
    return 0; 
  }

  // output
  cout << "You can win" << endl;
  return 0;

}