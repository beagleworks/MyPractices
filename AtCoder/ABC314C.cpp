// ABC314C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  string s;
  cin >> n >> m >> s;
  
  vector<int> Order(n);
  for (auto &a : Order) {
    cin >> a;
    a--;
  }

  // solve
  vector<deque<char>> V(m);
  for (int i=0; i<n; i++) {
    V[Order[i]].emplace_back(s[i]);
  }

  // output
  vector F(m, false);
  for (int i=0; i<n; i++) {
    if (!F[Order[i]]) {
      auto c = V[Order[i]].back();
      V[Order[i]].pop_back();
      cout << c;
      F[Order[i]] = true;
    }
    else {
      auto c = V[Order[i]].front();
      V[Order[i]].pop_front();
      cout << c;
    }
  }
  cout << endl;
  return 0;

}