// ABC294D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, Q;
  cin >> n >> Q;

  // solve
  int cur = 0;
  deque<int> que;
  vector done(n+1, 0);
  done[0] = 1;
  for (int i=0; i<Q; i++) {
    int k;
    cin >> k;

    if (k == 1) que.emplace_back(++cur);
    else if (k == 2) {
      int m;
      cin >> m;
      done[m] = 1;
    }
    else {
      while (true) {
        int x = que.front();
        que.pop_front();
        if (!done[x]) {
          cout << x << '\n';
          que.emplace_front(x);
          break;
        }
      }
    }

  }

  return 0;

}