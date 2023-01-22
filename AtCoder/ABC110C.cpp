// ABC110C

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
  int n = s.size();
  map<char, int> mps, mpt;
  for (int i=0; i<n; i++) {
    if ((!mps[s[i]] && !mpt[t[i]]) || (mps[s[i]] == mpt[t[i]])) {
      mps[s[i]] = i+1;
      mpt[t[i]] = i+1;
    }
    else {
      cout << "No" << endl;
      return 0;
    }
  }
  
  // output
  cout << "Yes" << endl;
  return 0;

}