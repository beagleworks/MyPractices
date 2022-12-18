// Typical90_001

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, l, k;
  cin >> n >> l >> k;

  vector<int> A(n);
  for (int i=0; i<n; i++) cin >> A[i];

  // solve
  int left = 1, right = l, mid;
  while(right - left > 1) {
    mid = (right + left) / 2;
    int len = 0, cnt = 0;
    for (int i=0; i<n; i++) {
      if (i == 0) len += A[i];
      else len += A[i] - A[i-1];
      if (len >= mid) {
        cnt++;
        len = 0;
      }
    }

    if (len+l-A[n-1] >= mid) cnt++;
    if (cnt < k+1) right = mid;
    else left = mid;
  }

  // output
  cout << left << endl;
  return 0;

}