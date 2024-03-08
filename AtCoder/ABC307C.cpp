// ABC307C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()

int H[2], W[2];
int main(){

  // input
  cin >> H[0] >> W[0];
  vector<string> A(H[0]);
  for (auto &a : A) cin >> a;

  cin >> H[1] >> W[1];
  vector<string> B(H[1]);
  for (auto &b : B) cin >> b;

  int HX, WX;
  cin >> HX >> WX;
  vector<string> X(HX);
  for (auto &x : X) cin >> x;

  // solve
  auto findBlack = [](int h, int w, vector<string> &V) -> pair<int, int>{
    for (int i=0; i<h; i++) for (int j=0; j<w; j++) {
      if (V[i][j] == '#') return {i, j};
    }
    return {-1, -1};
  };

  auto gA = findBlack(H[0], W[0], A), gB = findBlack(H[1], W[1], B), gX = findBlack(HX, WX, X);
  vector<vector<string>> FAB = {A, B};
  vector<pair<int, int>> gAB = {gA, gB};

  auto compareBlack = [&](int si, int sj, int ei, int ej, vector<string> &Target, vector<string> &Aim, int AI, int AJ){
    for (int i=si; i<ei; i++) {
      for (int j=0; j<ej; j++) {
        // 最初のライン
        if (i == si && j < sj) continue;
        int XI = AI-si+i, XJ = AJ-sj+j;
        // cout << i << " " << j << "compare" << XI << " " << XJ << endl;
        // 欄外に黒
        if (XI < 0 || XI >= HX || XJ < 0 || XJ >= WX) {
          if (Target[i][j] == '#') return false;
          else continue;
        }
        // 不一致
        if (Target[i][j] == '#' && Aim[XI][XJ] == '.') return false;
        if (Target[i][j] == '#') Aim[XI][XJ] = 'o';
      }
    }
    return true;
  };

  for (int z=0; z<2; z++) {
    auto XX = X;
    if (!compareBlack(gAB[z].first, gAB[z].second, H[z], W[z], FAB[z], XX, gX.first, gX.second)) {
      continue;
    }
    for (int i=0; i<HX; i++) {
      for (int j=0; j<WX; j++) {
        if (X[i][j] == '#') {
          auto XX2 = X;
          if (compareBlack(gAB[1-z].first, gAB[1-z].second, H[1-z], W[1-z], FAB[1-z], XX2, i, j)) {
            bool f = true;
            for (int u=0; u<HX; u++) for (int v=0; v<WX; v++) {
              if (X[u][v] == '#'){
                if (XX[u][v] != 'o' && XX2[u][v] != 'o') f = false; 
              }              
            }
            if (f) {
              cout << "Yes" << endl;
              return 0;
            }
          }
        }
      }
    }
  }

  cout << "No" << endl;
  return 0;

}