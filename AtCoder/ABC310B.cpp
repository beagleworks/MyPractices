// ABC310B

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n, m;
  cin >> n >> m;

  vector<int> P(n), C(n);
  vector<set<int>> F(n);

  for (int i=0; i<n; i++) {
    cin >> P[i] >> C[i];
    for (int j=0; j<C[i]; j++) {
      int f;
      cin >> f;
      F[i].emplace(f);
    }    
  }

  // solve
  bool ans = false;
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (P[i] == P[j] && C[i] > C[j]) {
        vector<int> FF1, FF2;
        set_difference(ALL(F[i]), ALL(F[j]), inserter(FF1, FF1.end()));
        set_difference(ALL(F[j]), ALL(F[i]), inserter(FF2, FF2.end()));
        if (FF1.size() > 0 && FF2.size() == 0) ans = true;
      }
      else if (P[i] < P[j] && C[i] >= C[j]) {
        vector<int> FF2;
        set_difference(ALL(F[j]), ALL(F[i]), inserter(FF2, FF2.end()));
        if (FF2.size() == 0) ans = true;
      }
    }
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}

/* 
すべての組み合わせを、条件を満たしているかどうか調べる
差集合以外にincludesを用いる方法もある
*/