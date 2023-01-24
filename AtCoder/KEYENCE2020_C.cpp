// KEYENCE2020_C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()

int main(){

  // input
  int n, k, s;
  cin >> n >> k >> s;

  // solve
  vector<int> ans;
  int MX = 1000000000;
  if (MX == s) MX = 1;
  for (int i=0; i<n; i++) {
    if (i < k) ans.emplace_back(s);
    else ans.emplace_back(MX);
  }

  // output
  for (auto a : ans) cout << a << endl;
  return 0;

}