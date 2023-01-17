// ABC285B

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
  int n;
  string s;
  cin >> n >> s;

  // solve
  for (int i=1; i<n; i++) {
    int ans = 0;
    for (int l=1; l+i<=n; l++) {
      if (l+i-1 >= n) break;
      if (s[l-1] != s[l+i-1]) ans = l;
      else break;
    }
    cout << ans << endl;
  }

  return 0;

}