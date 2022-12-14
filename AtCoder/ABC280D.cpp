// ABC280D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  long long k;
  cin >> k;

  // solve
  long long x = k;
  vector<pair<long long, int>> dv;
  for (long long i=2LL; i*i<=k; i++) {
    int cnt = 0;
    while (x%i == 0) {
      x /= i;
      cnt++;
    }
    dv.emplace_back(i, cnt);
  }
  if (x != 1) dv.emplace_back(x, 1);

  // ルジャンドルの公式
  auto f = [](long long a, long long b){
    long long ret = 0LL;
    while (a > 0) {
      a /= b;
      ret += a;
    }
    return ret;
  };

  // 二分探索
  long long left = 0LL, right = k;
  while (right - left > 1) {
    long long hf = (right + left) / 2;
    bool flag = true;
    for (auto [p, cnt]: dv) {
      if (f(hf, p) < cnt) flag = false;
    }

    if (flag) right = hf;
    else left = hf;
  }

  // output
  cout << right << endl;
  return 0;

}