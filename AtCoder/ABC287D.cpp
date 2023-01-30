// ABC287D

#include <bits/stdc++.h>
using namespace std;
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
  string s, t;
  cin >> s >> t;

  // solve
  int n = s.size(), m = t.size();
  vector dpfront(m+1, false), dpback(m+1, false);
  dpfront[0] = true, dpback[0] = true;
  for (int i=1; i<=m; i++) {
    if (!dpfront[i-1]) dpfront[i] = false;
    else dpfront[i] = (s[i-1] == t[i-1] || s[i-1] == '?' || t[i-1] == '?');
    if (!dpback[i-1]) dpback[i] = false;
    else dpback[i] = (s[n-i] == t[m-i] || s[n-i] == '?' || t[m-i] == '?');
  }

  // output
  for (int i=0; i<=m; i++) {
    cout << (dpfront[i] && dpback[m-i] ? "Yes" : "No") << endl;
  }

  // VIEW(dpfront);
  // VIEW(dpback);
  return 0;

}