// ABC079A
// https://atcoder.jp/contests/abc079/tasks/abc079_a

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  string n;
  cin >> n;

  // solve
  if ((n[1] == n[2]) && ((n[0] == n[1]) || (n[2] == n[3]))) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
  
}