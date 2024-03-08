// ABC302C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  cin >> n >> m;
  vector<string> S(n);
  for (auto &s : S) cin >> s;

  // solve
  sort(ALL(S));
  do {
    bool fff = true;
    for (int i=0; i<n-1; i++) {
      bool ff = false;
      for (int j=0; j<m; j++) {
        bool f = false;
        auto U = S;
        for (int k=0; k<26; k++) {
          U[i][j] = (char)('a' + k);
          if (U[i] == U[i+1]) f = true;
        }
        if (f) ff = true;
      }
      if (!ff) fff = false; 
    }
    if (fff) {
      cout << "Yes" << endl;
      return 0;
    }
  } while (next_permutation(ALL(S)));


  cout << "No" << endl;
  return 0;

}