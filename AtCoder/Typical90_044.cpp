// Typical90_044

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
  int n, q;
  cin >> n >> q;

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  int scnt = 0;
  for (int i=0; i<q; i++) {
    int t, x, y;
    cin >> t >> x >> y;
    x--, y--;

    if (t == 1) swap(A[(x+scnt)%n], A[(y+scnt)%n]);
    else if (t == 2) {
      scnt--;
      if (scnt < 0) scnt = n-1;
    }
    else cout << A[(x+scnt)%n] << endl;
  }

  //VIEW(A);

  return 0;

}