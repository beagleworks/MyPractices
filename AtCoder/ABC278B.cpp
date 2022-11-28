// ABC278B
// https://atcoder.jp/contests/abc278/tasks/abc278_b

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

bool isMisJudge(int a, int b, int c){
  if (b >= 6) return false;
  if (a == 2 && c >= 4) return false;
  else return true;
}

int main(){

  // input
  int h, m;
  cin >> h >> m;

  // solve
  int a = h / 10, b = h % 10;
  int c = m / 10, d = m % 10;

  while (!isMisJudge(a,b,c)){
    m++;
    if (m == 60) {
      m = 0;
      h++;
    }
    if (h == 24) h = 0;
    a = h / 10, b = h % 10;
    c = m / 10, d = m % 10;
  }

  cout << a * 10 + b << " " << c * 10 + d << endl;
  return 0;
  
}
