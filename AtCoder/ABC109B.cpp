// ABC109B

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
  char t = 0;
  map<string, bool> mp;
  for (int i=0; i<n; i++) {
    string w;
    cin >> w;
    if ((t && t != w.front()) || mp[w]) {
      cout << "No" << endl;
      return 0;
    }

    mp[w] = true;
    t = w.back();
  }

  // output
  cout << "Yes" << endl;
  return 0;

}