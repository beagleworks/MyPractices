// ABC082B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string s, t;
  cin >> s >> t;

  // solve
  sort(ALL(s));
  sort(ALL(t), greater<char>());

  // output
  cout << (s < t ? "Yes" : "No") << endl;
  return 0;

}