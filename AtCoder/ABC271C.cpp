// ABC271C

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

  set<int> st;
  priority_queue<int, vector<int>, greater<int>> pq;
  priority_queue<int> qp;
  int stock = 0;
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    a--;
    if (st.count(a) || a+1 > n) stock++;
    else {
      st.emplace(a);
      pq.emplace(a);
      qp.emplace(a);
    }
  }

  // solve
  int ans = -1;
  int cur = 0, lim = INF;

  while (!pq.empty()) {
    int x = pq.top();
    if (x >= lim) {
      cout << ++ans << endl;
      return 0;
    }
    if (x == cur) {
      pq.pop();
      ans = cur++;
    }
    else if (stock > 1) {
      stock -= 2;
      ans = cur++;
    }
    else {
      while (stock != 2) {
        if (qp.empty()) {
          cout << ++ans << endl;
          return 0;
        }
        int z = qp.top();
        if (z <= cur) {
          cout << ++ans << endl;
          return 0;
        }
        qp.pop();
        lim = z;
        stock++;
      }
      stock = 0;
      ans = cur++;
    }    
  }

  // output
  cout << ans+1+stock/2 << endl;
  return 0;

}

// 二分探索でどこまで売るか決める