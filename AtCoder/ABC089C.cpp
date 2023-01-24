// ABC089C

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
  map<char, long long> S;
  for (int i=0; i<n; i++) {
    string s;
    cin >> s;
    S[s.front()]++;
  }

  // output
  long long ans = S['A']*S['C']*(S['H']+S['M']+S['R']) + S['A']*S['H']*(S['M']+S['R']) + S['A']*S['M']*S['R'] +
    S['C']*S['H']*(S['M']+S['R']) + S['C']*S['M']*S['R'] + S['H']*S['M']*S['R'];

  cout << ans << endl;
  return 0;

}