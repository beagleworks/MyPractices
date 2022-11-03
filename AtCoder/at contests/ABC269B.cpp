// ABC269B
// https://atcoder.jp/contests/abc269/tasks/abc269_b

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
  vector<string> S(10);
  for (auto& s: S) cin >> s;

  // solve
  int a, b = 10, c, d = 10;
  bool f1 = false;
  for (int i=0; i<10; i++){    
    if (S[i] == ".........." && !f1) continue;
    else if (S[i] != ".........." && !f1) {
      f1 = true;
      a = i+1;
      bool f2 = false;
      for (int j=0; j<10; j++){
        if (S[i][j] == '.' && !f2) continue;
        else if (S[i][j] == '#' && !f2){
          c = j+1;
          f2 = true;
        }
        else if (S[i][j] == '#') continue;
        else {
          d = j;
          break;
        }
      }
    }
    else if (S[i] != "..........") continue;
    else {
      b = i;
      break;
    }
  }

  // output
  cout << a << " " << b << '\n';
  cout << c << " " << d << '\n';
  return 0;
  
}