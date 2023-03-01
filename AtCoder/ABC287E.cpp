// ABC287E

#include <bits/stdc++.h>
using namespace std;
// ACL
#include <atcoder/all>
using namespace atcoder;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;
// for debug
#define COUT(a) cout << a << endl
#define VIEW(x) do{cout << "--" << #x << "--" << endl; view(x);}while(0)
template<typename T> void view(T e){COUT(e);}
template<typename T> void view(const vector<T>& v){for(const auto& e : v){ cout << e << " "; } cout << endl;}
template<typename T> void view(const vector<vector<T> >& vv){ for(const auto& v : vv){ view(v); } }

int main(){

  // input
  int n;
  cin >> n;

  vector<pair<string, int>> S;
  for (int i=0; i<n; i++) {
    string a;
    cin >> a;
    S.emplace_back(a,i);
  }

  // solve
  sort(ALL(S));
  vector<int> ans(n, 0);
  for (int i=0; i<n-1; i++) {
    int x = S[i].first.size();
    auto V = z_algorithm(S[i].first + '$' + S[i+1].first + '#');
    ans[S[i].second] = max(ans[S[i].second], V[x+1]);
    ans[S[i+1].second] = max(ans[S[i+1].second], V[x+1]);
    // VIEW(V);
  }

  // output
  for (auto a : ans) cout << a << '\n';
  return 0;

}