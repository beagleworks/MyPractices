#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()

int sumDigit(int p) {
  int ret = 0;
  while (p > 0) {
    ret += p%10;
    p /= 10;
  }
  return ret;
}

int main(){

  // input
  int n;
  cin >> n;

  vector<map<int, int>> A(5);
  vector<vector<int>> B(3);
  for (int i=0; i<n; i++) {
    string a;
    cin >> a;
    int len = a.size();
    int x = stoi(a);
    if (len >= 3) B[len-3].emplace_back(x);
    int y = sumDigit(x);
    A[len-1][y]++;
  }

  // solve
  long long ans = n;
  // 同じ長さの場合をカウント
  for (int i=0; i<5; i++) {
    for (int j=1; j<=9*(i+1); j++) {
      if (A[i][j] > 1) ans += (long long)A[i][j] * (A[i][j] - 1);
    }
  }

  for (auto x : B[0]) {
    int tp = x / 100, t_rst = sumDigit(x % 100);
    int bk = x % 10, b_rst = sumDigit(x / 10);
    ans += A[0][max(t_rst - tp, 0)];
    ans += A[0][max(b_rst - bk, 0)];
  }

  for (auto x : B[1]) {
    int tp = x / 1000, t_rst = sumDigit(x % 1000);
    int bk = x % 10, b_rst = sumDigit(x / 10);
    ans += A[1][max(t_rst - tp, 0)];
    ans += A[1][max(b_rst - bk, 0)];
  }

  for (auto x : B[2]) {
    int tp = x / 10000, t_rst = sumDigit(x % 10000);
    int bk = x % 10, b_rst = sumDigit(x / 10);
    int tp2 = sumDigit(x / 1000), t2_rst = sumDigit(x % 1000);
    int bk2 = sumDigit(x % 100), b2_rst = sumDigit(x / 100);
    ans += A[2][max(t_rst - tp, 0)];
    ans += A[2][max(b_rst - bk, 0)];
    ans += A[0][max(t2_rst - tp2, 0)];
    ans += A[0][max(b2_rst - bk2, 0)];
  }

  // output
  cout << ans << endl;
  return 0;

}