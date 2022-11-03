// ABC268A
// https://atcoder.jp/contests/abc268/tasks/abc268_a

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 1e9 + 7;
const long long LINF = 1e18;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;

  // solve
  set<int> st = {a, b, c, d, e};

  // output
  cout << st.size() << '\n';
  return 0;
  
}