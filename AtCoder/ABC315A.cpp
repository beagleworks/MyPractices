// ABC315A

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
  for (auto c : s) if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') cout << c;

  cout << endl;
  return 0;

}