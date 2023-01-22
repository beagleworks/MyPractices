// ABC049C(ARC065A)

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
  reverse(ALL(s));
  string a = "maerd", b = "remaerd", c = "esare", d = "resare";
  string t = "";

  for (int i=0; i<n; i++) {
    t += s[i];
    if (t == a || t == b || t == c || t == d) t = "";
  }

  // output
  cout << (t == "" ? "YES" : "NO") << endl;
  return 0;

}