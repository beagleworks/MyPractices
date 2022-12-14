// ABC100A
// https://atcoder.jp/contests/abc100/tasks/abc100_a

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int a, b;
  cin >> a >> b;

  // output
  cout << (a <= 8 && b <= 8 ? "Yay!" : ":(") << endl;
  return 0;
  
}