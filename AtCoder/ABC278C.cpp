// ABC278C
// https://atcoder.jp/contests/abc278/tasks/abc278_c

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, q;
  cin >> n >> q;

  // solve
  unordered_map<string, bool> state;

  for (int i=0; i<q; i++){
    int t;
    string a, b;
    cin >> t >> a >> b;
    string target = a + "&" + b;
    if (t == 1) state[target] = true;
    else if (t == 2) state[target] = false;
    else {
      string rtaget = b + "&" + a;
      if (state[target] && state[rtaget]) cout << "Yes" << endl;
      else cout << "No" << endl;
    }
  }

  return 0;
  
}
