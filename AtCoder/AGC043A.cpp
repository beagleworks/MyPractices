// AGC043A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

// for debug
#define COUT(a) cout << a << endl
template<typename T> void view(T e){COUT(e);}
template<typename T> void view(const vector<T>& v){for(const auto& e : v){ cout << e << " "; } cout << endl;}
template<typename T> void view(const vector<vector<T> >& vv){ for(const auto& v : vv){ view(v); } }
#define VIEW(x) do{cout << "--" << #x << "--" << endl; view(x);}while(0)

int main(){

  // input
  int h, w;
  cin >> h >> w;

  vector<string> Field(h);
  for (auto &f : Field) cin >> f;

  // solve
  vector dp(h, vector<int>(w, INF));
  dp[0][0] = 0;
  if (Field[0][0] == '#') dp[0][0]++;

  constexpr int dy[2] = {1, 0};
  constexpr int dx[2] = {0, 1};

  auto dfs = [&](auto self, int y, int x) -> void{
    for (int i=0; i<2; i++) {
      int Y = y + dy[i];
      int X = x + dx[i];
      if (Y >= h || X >= w) continue;
      if (Field[y][x] == '.' && Field[Y][X] == '#') {
        if (dp[Y][X] > dp[y][x]+1) {
          dp[Y][X] = dp[y][x]+1;
          self(self, Y, X);
        }
      }
      else{
        if (dp[Y][X] > dp[y][x]) {
          dp[Y][X] = dp[y][x];
          self(self, Y, X);
        }
      }
    }
    return;
  };

  dfs(dfs, 0, 0);  

  // output
  cout << dp[h-1][w-1] << endl;
  //VIEW(dp);
  return 0;

}