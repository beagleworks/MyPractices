// ABC243A
// https://atcoder.jp/contests/abc243/tasks/abc243_a

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int V, A, B, C;
  cin >> V >> A >> B >> C;

  // solve&output
  V %= A+B+C;
  if (V < A) cout << "F\n";
  else if (V-A < B) cout << "M\n";
  else cout << "T\n";
  return 0;
  
}
