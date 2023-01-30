// ABC287A

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

  // solve
  int cnt = 0;

  for (int i=0; i<n; i++) {
    string s;
    cin >> s;
    if (s == "For") cnt++;
  }

  // output
  cout << (n/2 < cnt ? "Yes" : "No") << endl;
  return 0;

}