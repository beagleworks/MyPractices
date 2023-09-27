// ABC321B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
// constexpr int INF = 1009876543;
// constexpr long LINF = 2211009988776543210LL;
// constexpr int MOD = 998244353;

int main(){

  // input
  int n, x;
  cin >> n >> x;

  int sum = 0;
  vector<int> A(n-1);
  for (auto &a : A) {
    cin >> a;
    sum += a;
  }

  // solve
  for (int i=0; i<=100; i++) {
    auto B = A;
    int sumi = sum;
    B.emplace_back(i);
    sumi += i;
    int mx = *max_element(ALL(B)), mn = *min_element(ALL(B));
    int score = sumi - mx - mn;
    if (score >= x) {
      cout << i << endl;
      return 0;
    }
  }
  
  cout << -1 << endl;
  return 0;

}