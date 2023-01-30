// ABC045B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string sa, sb, sc;
  cin >> sa >> sb >> sc;
  vector<string> S = {sa, sb, sc};

  // solve
  int turn = 0;
  while (true) {
    int now = turn;
    if (S[now].size() == 0) break;
    turn = S[now].front() - 'a';
    S[now] = S[now].substr(1);
  }

  // output
  cout << char('A' + turn) << endl;
  return 0;

}