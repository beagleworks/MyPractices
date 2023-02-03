// ABC264C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

// for debug
#define COUT(a) cout << a << endl
#define VIEW(x) do{cout << "--" << #x << "--" << endl; view(x);}while(0)
template<typename T> void view(T e){COUT(e);}
template<typename T> void view(const vector<T>& v){for(const auto& e : v){ cout << e << " "; } cout << endl;}
template<typename T> void view(const vector<vector<T> >& vv){ for(const auto& v : vv){ view(v); } }

int main(){

  // input
  int h, w;
  cin >> h >> w;

  vector A(h, vector<int>(w));
  for (auto &a : A) for (auto &e : a) cin >> e;

  int h2, w2;
  cin >> h2 >> w2;

  vector B(h2, vector<int>(w2));
  for (auto &b : B) for (auto &e : b) cin >> e;  

  // solve
  bool ans = false;
  for (int bit = 0; bit < (1<<h); bit++) {
    set<int> st;
    for (int i=0; i<h; i++) {
      if (bit & (1<<i)) st.emplace(i);
    }
    for (int bit2 = 0; bit2 < (1<<w); bit2++) {
      set<int> st2;
      for (int j=0; j<w; j++) {
        if (bit2 & (1<<j)) st2.emplace(j);
      }

      int h2 = h-(int)st.size(), w2 = w-(int)st2.size();
      vector C(h2, vector<int>(w2));
      int cnt = -1;
      for (int u=0; u<h; u++) {
        if (st.count(u)) continue;
        cnt++;
        int cntw = -1;
        for (int v=0; v<w; v++) {
          if (st2.count(v)) continue;
          cntw++;
          C[cnt][cntw] = A[u][v];
        }
      }
      
      if (B == C) ans = true;
      // VIEW(C);

    }
  }

  // output
  cout << (ans ? "Yes" : "No") << endl;
  return 0;

}