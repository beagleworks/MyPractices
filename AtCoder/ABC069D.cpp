// ABC069D(ARC080B)

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int h, w, n;
  cin >> h >> w >> n;

  // solve
  vector<int> ans;
  for (int i=1; i<=n; i++) {
    int a;
    cin >> a;
    for (int j=0; j<a; j++) {
      ans.emplace_back(i);
    }
  }

  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      if (i % 2 == 0) cout << ans[w*i+j] << " ";
      else cout << ans[w*i+w-1-j] << " ";
    }
    cout << endl;
  }

  return 0;

}