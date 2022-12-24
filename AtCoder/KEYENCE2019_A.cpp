// KEYENCE2019_A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  // solve
  vector<int> V = {a, b, c, d};
  sort(ALL(V));

  // output
  cout << (V[0] == 1 && V[1] == 4 && V[2] == 7 && V[3] == 9 ? "YES" : "NO") << endl;
  return 0;

}