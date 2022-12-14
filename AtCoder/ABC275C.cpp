// ABC275C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  vector<string> field(9);
  for (auto &f: field) cin >> f;

  // solve
  int ans = 0;
  
  auto f = [](int si, int sj, int ti, int tj) -> int {
    return (si-ti)*(si-ti)+(sj-tj)*(sj-tj);
  };


  for (int ai=0; ai<9; ai++) for (int aj=0; aj<9; aj++) for (int bi=0; bi<9; bi++) for (int bj=0; bj<9; bj++){
    for (int ci=0; ci<9; ci++) for (int cj=0; cj<9; cj++) for (int di=0; di<9; di++) for (int dj=0; dj<9; dj++){
      if (field[ai][aj] == '#' && field[bi][bj] == '#' && field[ci][cj] == '#' && field[di][dj] == '#'){
        vector<int> E = {f(ai, aj, bi, bj), f(bi, bj, ci, cj), f(ci, cj, di, dj), f(di, dj, ai, aj), f(ai, aj, ci, cj), f(bi, bj, di, dj)};
        sort(ALL(E));
        
        if (E[0] && E[0] == E[3] && E[4] == E[5] && E[0]*2 == E[4]) ans++;
      }
      
    }
  }

  // output
  cout << ans/24 << endl;
  return 0;

}