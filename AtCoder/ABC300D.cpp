// ABC300D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

bool isPrime(long long n) {
  if (n < 2) return false;
  for (long long i=2; i*i<=n; i++) {
    if (n%i == 0) return false;
  }
  return true;
}

int main(){

  // input
  int64_t n;
  cin >> n;

  // solve
  int ans = 0;
  int64_t x = n / 12;
  vector<int64_t> pr = {2, 3, 5};
  for (int64_t i=7; i*i<=x; i+=2) {
    if (isPrime(i)) pr.emplace_back(i);
  }

  int q = pr.size();
  for (int i=0; i<q-2; i++) {
    for (int j=i+1; j<q-1; j++) {
      int64_t P = pr[i]*pr[i]*pr[j];
      int left = j+1, right = q;
      if (pr[left]*pr[left] > n/P) break;      
      while (right - left > 1) {
        int mid = (left + right) / 2;
        if (P*pr[mid]*pr[mid] <= n) left = mid;
        else right = mid;
      }
      ans += left-j;
    }
  }

  // output
  cout << ans << endl;
  return 0;

}