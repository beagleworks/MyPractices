// ABC159D

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
  vector<int> A(n);
  map<int, int> mp;
  for (auto &a : A) {
    cin >> a;
    mp[a]++;
  }

  // solve
  long long comb = 0;
  for (auto [a, p] : mp) {
    comb += (long long)p*(p-1)/2;
  }

  for (int i=0; i<n; i++) {
    long long p = mp[A[i]];
    cout << comb - (p-1) << endl;
  }

  return 0;

}