// ABC084B
// https://atcoder.jp/contests/abc084/tasks/abc084_b

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int a, b;
  string s;
  cin >> a >> b >> s;

  // solve
  bool ans = true;
  for (int i=0; i<a+b+1; i++){
    if (i == a && s[i] != '-') ans = false;
    if (i != a && (s[i] < '0' || '9' < s[i])) ans = false;
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;
  
}