// ABC006C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  // solve
  int a, b = 0, c = 0;
  if (m % 2 == 1) b = 1;
  a = (m-b*3) / 2;

  while (a+b+c != n && a >= 0) {
    a -= 2;
    c++;
  }

  // output
  if (a+b+c == n && a >= 0) cout << a << " " << b << " " << c << endl;
  else cout << "-1 -1 -1" << endl;
  return 0;

}