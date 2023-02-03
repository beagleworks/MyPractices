// ABC058C(ARC071A)

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
  vector<map<char, int>> S(n);
  for (int i=0; i<n; i++) {
    string s;
    cin >> s;
    for (auto c : s) {
      S[i][c]++;
    }
  }

  map<char, int> ans;
  for (char c = 'a'; c <= 'z'; c++) {
    ans[c] = INF;
  }

  for (int i=0; i<n; i++) {
    for (char c = 'a'; c <= 'z'; c++) {
      ans[c] = min(ans[c], S[i][c]);
    }
  }

  // output
  for (char c = 'a'; c <= 'z'; c++) {
    if (ans[c] != INF) for (int i=0; i<ans[c]; i++) cout << c;
  }
  cout << endl;
  return 0;

}