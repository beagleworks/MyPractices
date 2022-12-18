// ABC072D(ARC082B)

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n;
  cin >> n;

  // solve
  vector A(n, 0);
  int cnt = 0;
  bool pre = false;
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    a--;
    if (a == i) {
      if (pre) pre = false; 
      else {
        cnt++;
        pre = true;
      }
    }
    else pre = false;
  }

  // output
  cout << cnt << endl;
  return 0;

}