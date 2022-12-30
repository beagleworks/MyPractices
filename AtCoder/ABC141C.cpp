// ABC141C

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
  int n, k, q;
  cin >> n >> k >> q;
  
  // solve
  vector<int> Point(n, k-q);
  for (int i=0; i<q; i++) {
    int a;
    cin >> a;
    a--;
    Point[a] += 1;
  }

  // output
  for (auto p : Point) {
    cout << (p > 0 ? "Yes" : "No") << endl;
  }
  //VIEW(Point);
  return 0;

}