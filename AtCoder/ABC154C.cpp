// ABC154C

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
  bool ans = true;
  map<int, int> mp;
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    if (!mp[a]) mp[a]++;
    else ans = false;
  }

  // output
  cout << (ans ? "YES" : "NO") << endl;
  return 0;

}