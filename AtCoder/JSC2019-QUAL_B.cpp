// JSC2019-QUAL_B

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

constexpr int mod = 1000000007;

int main(){

  // input
  long long n, k;
  cin >> n >> k;
  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  long long ans = 0LL;
  long long inter = 0LL, inner = 0LL; 
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (A[i] > A[j]) {
        inter++;
        if (i < j) {
          inner++;
        }
      }
    }
  }


  // output
  ans += (inner * k) % mod;
  ans += inter * ((k*(k-1)/2) % mod)%mod;
  cout << ans%mod << endl;
  return 0;

}