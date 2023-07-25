// ABC293C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int h, w;
  cin >> h >> w;

  vector A(h, vector<int>(w));
  for (auto &AA : A) for (auto &a : AA) cin >> a;

  // solve
  constexpr int dh[2] = {1, 0};
  constexpr int dw[2] = {0, 1};
  
  int ans = 0;
  
  for (int bit = 0; bit < (1 << (h+w-2)); bit++) {
    unordered_set<int> st;
    int H = 0, W = 0;
    st.emplace(A[H][W]);
    for (int i=0; i<h+w-2; i++) {
      bool x = bit & (1 << i);
      H += dh[x], W += dw[x];
      if (H >= h || W >= w) break;
      st.emplace(A[H][W]);
    }
    if ((int)st.size() == h+w-1) ans++;
  }

  // output
  cout << ans << endl;
  return 0;

}