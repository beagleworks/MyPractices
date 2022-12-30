// ABC141D

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
  int n, m;
  cin >> n >> m;
  multiset<int> A;
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    A.emplace(a);
  }

  // solve
  while (m > 0) {
    auto x = A.cend();
    x--;
    int p = *x/2;
    A.erase(x);
    A.emplace(p);
    m--;
  }

  // output
  long long ans = 0L;
  for (auto a : A) ans += a;
  cout << ans << endl;
  return 0;

}
// priority_queue