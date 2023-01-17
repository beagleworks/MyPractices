// ABC285E

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
  cin >> n;

  vector<long long> A(n);
  for (auto &a : A) cin >> a;

  // solve
  vector<long long> D(n);
  D[0] = 0;
  for (int i=1; i<n; i++) {
    D[i] = D[i-1] + A[(i-1)/2];
  }

  vector<long long> dp(n+1, 0);
  // i曜日(0-indexed)は休む
  for (int i=2; i<=n; i++) {
    for (int j=0; j<i; j++) {
      dp[i] = max(dp[j]+D[i-j-1], dp[i]);
    }
  }

  // output
  cout << dp[n] << endl;
  // VIEW(dp);
  return 0;

}