// AGC017A

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, p;
  cin >> n >> p;

  vector<int> Odd, Even;
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    if (a % 2 == 1) Odd.emplace_back(a);
    else Even.emplace_back(a);
  }

  // solve
  long long os = Odd.size(), es = Even.size();
  long long en = 1LL << es;
  long long on = 1LL << (os-1);
  long long ans = en * on;

  // output
  if (os == 0) cout << (p ? 0 : 1LL << n) << endl;
  else cout << ans << endl;
  return 0;

}