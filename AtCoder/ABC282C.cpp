// ABC282C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n;
  string s;
  cin >> n >> s;

  // solve
  bool q = false;
  for (auto ss : s) {
    if (q) {
      cout << ss;
      if (ss == '\"') q = false;
    }

    else {
      if (ss == ',') cout << ".";
      else {
        if (ss == '\"') q = true;
        cout << ss;
      }
    }
  }
  cout << endl;
  return 0;

}
