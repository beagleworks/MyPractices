// ARC005B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int x, y;
  string w;
  cin >> x >> y >> w;
  x--, y--;
  vector<string> N(9);
  for (auto &n : N) cin >> n;

  // solve
  map<string, pair<int, int>> mp = {{"D",{1,0}}, {"U",{-1,0}}, {"R",{0,1}}, {"L",{0,-1}}, {"RD",{1,1}}, {"LD",{1,-1}}, {"RU",{-1,1}}, {"LU",{-1,-1}}};
  auto p = mp[w];
  for (int i=0; i<4; i++) {
    if (i == 0) std::cout << N[y][x];
    else {
      int Y = y+p.first, X = x+p.second;
      if (Y < 0 || Y >= 9) p.first *= -1;
      if (X < 0 || X >= 9) p.second *= -1;
      Y = y+p.first, X = x+p.second; 
      std::cout << N[Y][X];
      y = Y, x = X;  
    }
  }

  cout << endl;
  return 0;

}