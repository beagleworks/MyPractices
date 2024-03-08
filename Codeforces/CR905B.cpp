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
  for (int ind = 0; ind < t; ind++) {
    int n, k;
    string s;
    cin >> n >> k >> s;
    map<char, int> mp;
    for (auto c : s) mp[c]++;
    int odd = 0;
    for (char c='a'; c<='z'; c++) {
      if (mp[c]%2) odd++; 
    }

    ret[ind] = odd-k <= 1;

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