// ABC086B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  string a, b;
  cin >> a >> b;

  // solve
  int c = stoi(a+b);
  for (int i=1; i*i<=c; i++) {
    if (i*i == c) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  // output
  cout << "No" << endl;
  return 0;

}