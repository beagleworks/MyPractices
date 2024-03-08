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

const set<int> ST = {2, 4, 8, 16};

vector<int> solve(){
  vector<int> ret(t, 1);
  for (int ind = 0; ind < t; ind++) {
    int n;
    cin >> n;
    vector<int> A(n);
    for (auto &a : A) cin >> a;

    for (int i=0; i<n; i++) {
      if (n < 3) break;
      for (int i=2; 1; i++) {
        if (n <= i+1) break;
        if (ST.count(i+1)) continue;
        if (A[i] > A[i+1]) ret[ind] = 0;
      }
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