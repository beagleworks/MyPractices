// ABC297E

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, k;
  cin >> n >> k;

  vector<int> A(n);
  for (auto &a : A) cin >> a;

  // solve
  priority_queue<int64_t, vector<int64_t>, greater<int64_t>> q;
  for (auto a : A) q.emplace(a);
  int64_t pre = 0;
  for (int i=0; i<k; i++) {
    int64_t cur;
    while (true) {
      cur = q.top();
      q.pop();
      if (cur != pre) break;
    }    
    
    for (auto a : A) q.emplace(cur+a);
    pre = cur;
  }


  // output
  cout << pre << endl;
  return 0;

}