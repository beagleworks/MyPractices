// ABC269E

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

  auto query = [](int a, int b, int c, int d) {
    cout << "? " << a+1 << " " << b << " " << c+1 << " " << d << endl;
    int ret;
    cin >> ret;
    return ret;
  };

  int left = 0, right = n;
  while (right - left > 1) {
    int mid = left + (right - left) / 2;
    int r = query(0, n, left, mid);
    if (r == mid - left) left = mid;
    else right = mid;
  }

  int c = left+1;
  left = 0, right = n;
  while (right - left > 1) {
    int mid = left + (right - left) / 2;
    int r = query(left, mid, 0, n);
    if (r == mid - left) left = mid;
    else right = mid;
  }

  cout << "! " << left+1 << " " << c << endl;
  return 0;

}