// ARC001C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  vector<string> field(8);
  for (auto &f : field) cin >> f;

  // solve
  vector<bool> row(8, false), col(8, false), rup(15, false), lup(15, false);
  for (int i=0; i<8; i++) {
    for (int j=0; j<8; j++) {
      if (field[i][j] == 'Q') {
        if (row[i] || col[j] || rup[i+j] || lup[i-j+7]) {
          cout << "No Answer" << endl;
          return 0;
        }
        row[i] = true, col[j] = true;
        rup[i+j] = true, lup[i-j+7] = true;
      }
    }
  }

  vector<int> V1, V2;
  for (int i=0; i<8; i++) {
    if (!row[i]) V1.emplace_back(i);
    if (!col[i]) V2.emplace_back(i);
  }

  do{
    do{
      bool f = true;
      vector Rup = rup, Lup = lup;
      for (int i=0; i<5; i++) {
        if (Rup[V1[i]+V2[i]] || Lup[V1[i]-V2[i]+7]) f = false;
        Rup[V1[i]+V2[i]] = true;
        Lup[V1[i]-V2[i]+7] = true;
      }

      if (f) {
        for (int i=0; i<5; i++) {
          field[V1[i]][V2[i]] = 'Q';
        }
        for (auto f : field) {
          cout << f << endl;
        }
        return 0;
      }
    }
    while(next_permutation(ALL(V2)));
  }
  while(next_permutation(ALL(V1)));

  // output
  cout << "No Answer" << endl;
  return 0;

}