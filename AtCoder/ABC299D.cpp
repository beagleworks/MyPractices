// ABC299D

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

  // query
  auto query = [](int x) {
    cout << "? " << x << endl;
    int ret;
    cin >> ret;
    return ret;
  };

  // solve
  int left = 0, right = n-1;
  while (right - left > 1) {
    int mid = (left + right) / 2;
    if (!query(mid+1)) left = mid;
    else right = mid;
  }

  // output
  cout << "! " << left+1 << endl;
  return 0;

}