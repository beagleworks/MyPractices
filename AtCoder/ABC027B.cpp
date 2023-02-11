// ABC027B

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

  vector<int> A(n);
  int sum = 0;
  for (auto &a : A) {
    cin >> a;
    sum += a;
  }

  // solve
  if (sum % n) {
    cout << -1 << endl;
    return 0;
  }

  int p = sum / n;
  vector<bool> B(n-1, false);
  int tmp = 0, cnt = 0;
  for (int i=0; i<n; i++) {
    cnt++;
    tmp += A[i];
    if (tmp == p*cnt) {
      cnt = 0;
      tmp = 0;
    }
    else {
      B[i] = true;
    }
  }

  // output
  cout << count(ALL(B), true) << endl;
  return 0;

}