// ABC132A

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
  map<char,int> mp;
  for (int i=0; i<4; i++) mp[s[i]]++;
  for (auto [p, q] : mp) {
    if (q != 2) {
      cout << "No" << endl;
      return 0;
    }
  }

  // output
  cout << "Yes" << endl;
  return 0;

}