// ABC131D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  vector<pair<int, int>> V;
  for (int i=0; i<n; i++) {
    int a, b;
    cin >> a >> b;
    V.emplace_back(a, b);
  }

  // solve
  sort(ALL(V), [](auto x, auto y){
    return x.second < y.second;
  });
  
  int now = 0;
  for (auto [c, lim] : V) {
    now += c;
    if (now > lim) {
      cout << "No" << endl;
      return 0;
    }
  }

  // output
  cout << "Yes" << endl;
  return 0;

}