// ABC313E

#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;
#define mint modint998244353

int main(){

  // input
  int n;
  string s;
  cin >> n >> s;

  // solve
  vector<pair<int, mint>> V;
  int pre = -1;
  for (auto c : s) {
    if (c > '1') {
      if (pre > 1) {
        cout << -1 << endl;
        return 0;
      }
      V.emplace_back(c-'0', 1);
    }
    else {
      if (pre != 1) V.emplace_back(1, 1);
      else V.back().second += 1;
    }

    pre = c - '0';
  }

  mint ans = 0;
  pre = 1;
  for (int i = (int)V.size()-1; i>=0; i--) {
    auto [p, q] = V[i];
    if (p > 1) {
      ans++;
      pre = p;
    }
    else {     
      ans += (pre - 1) * ans;
      ans += q;
    }
  }

  // output
  cout << ans.val() - 1 << endl;
  return 0;

}

/*
1以外の数字が連続しないパターンは回数を算出できる
後ろから順に"1"が発生する回数を足していけば良い
*/