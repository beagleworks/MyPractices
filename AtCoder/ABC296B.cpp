// ABC296B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  vector<string> board(8);
  for (auto &s : board) cin >> s;

  // solve
  for (int i=0; i<8; i++) for (int j=0; j<8; j++) {
    if (board[i][j] == '*') {
      cout << char('a'+j) << 8-i << endl;
    }
  }

  return 0;

}