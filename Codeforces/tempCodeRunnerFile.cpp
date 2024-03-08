#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
using ll = long long;
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int t;
void input(){
  cin >> t;
}

vector<bool> solve(){
  vector<bool> ret(t);
  map<pair<int, int>, int> mp;
  auto checkIntersect = [mp]() -> bool{
    vector<int> stF, stE;
    for (auto [p, _] : mp) {
      stF.emplace_back(p.first);
      stE.emplace_back(p.second);
    }
    sort(ALL(stF));
    for (auto x : stE) {
      if (upper_bound(ALL(stF), x) != stF.end()) return true;
    }

    return false;
  };

  for (int ind = 0; ind < t; ind++) {
    char op;
    int l, r;
    cin >> op >> l >> r;

    

    if (op == '-') {
      mp[{l, r}]--;
      if (!mp[{l, r}] && ret[ind-1]) ret[ind] = checkIntersect();
      else ret[ind] = ret[ind-1];
    }

    else {
      if (ind == 0) ret[ind] = false;
      else if (!mp[{l, r}] && !ret[ind-1]) {mp[{l, r}]++; ret[ind] = checkIntersect();}
      else mp[{l, r}]++; ret[ind] = ret[ind-1];

      
    }
  }

  return ret;
}

int main(){

  input();

  auto ans = solve();
  for (int i=0; i<t; i++) {
    cout << (ans[i] ? "YES" : "NO") << '\n';
  }

  return 0;

}