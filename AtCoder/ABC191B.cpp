// ABC191B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, x;
  cin >> n >> x;

  // output
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    if (a != x) cout << a << " ";
  }

  cout << endl;
  return 0;

}