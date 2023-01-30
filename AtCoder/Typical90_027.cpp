// Typical90_027

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
  unordered_map<string, bool> mp;
  for (int i=0; i<n; i++) {
    string s;
    cin >> s;
    if (mp[s]) continue;
    mp[s] = true;
    cout << i+1 << endl;
  }

  return 0;

}