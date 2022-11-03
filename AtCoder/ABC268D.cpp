// ABC268D
// https://atcoder.jp/contests/abc268/tasks/abc268_d

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 1e9 + 7;
const long long LINF = 1e18;

set<string> ans;

void addUnderbar(string s){
  bool f = true;
  for (int i=0; i<(int)s.size(); i++){
    if (s[i] == '_' && f){
      f = false;
      string t = s.substr(0, i) + '_' + s.substr(i);
      if (t.size() <= 16){
        auto it = ans.find(t);
        if (it == ans.end()){
          ans.insert(t);
          addUnderbar(t);
        }
      }
    }

    else if (s[i] == '_') continue;
    else f = true;
  }
  return;
}

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // input
  int n, m;
  cin >> n >> m;

  vector<string> s(n);
  set<string> t;
  for (auto& x: s) cin >> x;
  for (int i=0; i<m; i++){
    string x;
    cin >> x;
    t.insert(x);
  }

  // solve
  sort(ALL(s));

  do {
    string str = "";
    for (int i=0; i<(int)s.size(); i++){
      str += s[i];
      if (i != (int)s.size()-1) str += '_';
    }

    if (3 <= str.size() && str.size() <= 16){
      ans.insert(str);
      addUnderbar(str);
    }

  } while (next_permutation(ALL(s)));
 
  // output
  vector<string> op;
  set_difference(ALL(ans), ALL(t), back_inserter(op));
  if (op.size() == 0) cout << -1 << endl;
  else cout << op[0] << endl;

  //for (auto x: op) cout << x << endl;
  return 0;
  
}