// TENKA1-2019-BEGINNER_B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, k;
  string s;
  cin >> n >> s >> k;

  // output
  for (auto c : s) {
    cout << (c == s[k-1] ? c : '*');
  }
  cout << endl;
  return 0;

}