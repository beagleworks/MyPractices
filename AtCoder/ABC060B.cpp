// ABC060B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int a, b, c;
  cin >> a >> b >> c;

  // solve
  for (int i=1; i<b; i++) {
    if ((a*i)%b == c) {
      cout << "YES" << endl;
      return 0;
    }
  }

  cout << "NO" << endl;
  return 0;

}