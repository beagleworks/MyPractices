// ABC053B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  string s;
  cin >> s;

  // solve
  int n = s.size();
  int a = INF, z = -1;
  for (int i=0; i<n; i++) {
    if (s[i] == 'A') a = min(i, a);
    if (s[i] == 'Z') z = i;
  }

  // output
  cout << z-a+1 << endl;
  return 0;

}