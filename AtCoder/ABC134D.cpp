// ABC134D

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
  for (auto &a : A) cin >> a;

  // solve
  vector<bool> box(n, false);

  auto pf = [&](long long n) {
    for (long long i=1; i*i<=n; i++) {
      if (n % i == 0) {
        box[i-1] = !box[i-1];
        if (n != i*i) box[n/i-1] = !box[n/i-1];
      }
    }
    return;
  };

  vector<int> ans;
  for (int i=n-1; i>=0; i--) {
    if (A[i] != box[i]) {
      ans.emplace_back(i+1);
      pf(i+1);

    }
    // VIEW(box);
  }

  // output
  cout << ans.size() << '\n';
  for (auto a : ans) cout << a << '\n';
  return 0;

}