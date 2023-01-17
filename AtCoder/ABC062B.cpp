// ABC062B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int h, w;
  cin >> h >> w;

  // solve
  string s = string(w+2, '#');
  cout << s << endl;
  for (int i=0; i<h; i++) {
    string x;
    cin >> x;
    string o = "#" + x + "#";
    cout << o << endl;
  }
  cout << s << endl;
  
  return 0;

}