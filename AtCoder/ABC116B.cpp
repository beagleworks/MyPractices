// ABC116B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int s;
  cin >> s;

  // solve
  set<int> st = {s};
  int ans = 1;
  int x, prex = s;
  auto f = [](int a){
    return (a%2 ? 3*a+1 : a/2);
  };

  while (true) {
    x = f(prex);
    ans++;
    if (st.count(x)) break;
    st.emplace(x);
    prex = x;
  }

  // output
  cout << ans << endl;
  return 0;

}