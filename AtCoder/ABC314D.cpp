// ABC314D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, q;
  string s;
  cin >> n >> s >> q;

  // solve
  vector<int> T(q), X(q);
  vector<char> C(q);
  for (int i=0; i<q; i++) {
    cin >> T[i] >> X[i] >> C[i];
  }
  
  int memo = -1;
  for (int i=0; i<q; i++) {
    if (T[i] != 1) memo = i; 
  }

  if (memo == -1) {
    for (int i=0; i<q; i++) s[X[i]-1] = C[i];
  }
  else {
    for (int i=0; i<memo; i++) {
      if (T[i] == 1) s[X[i]-1] = C[i];
    }

    if (T[memo] == 2) {
      transform(s.cbegin(), s.cend(), s.begin(), ::tolower);
    }
    else {
      transform(s.cbegin(), s.cend(), s.begin(), ::toupper);
    }

    for (int i=memo+1; i<q; i++) {
      if (T[i] == 1) s[X[i]-1] = C[i];
    }

  }

  // output
  cout << s << endl;
  return 0;

}