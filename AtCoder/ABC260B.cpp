// ABC260B

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
  int n, x, y, z;
  cin >> n >> x >> y >> z;

  vector<pair<int,int>> A, B, C;
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    A.emplace_back(a, i);
    C.emplace_back(a, i);
  }
  for (int i=0; i<n; i++) {
    int b;
    cin >> b;
    B.emplace_back(b, i);
    C[i].first += b; 
  }

  // solve
  vector<bool> passed(n, false);
  int p = 0;

  sort(ALL(A), [](const auto &x, const auto &y){
    return get<0>(x) == get<0>(y) ? get<1>(x) < get<1>(y) : get<0>(x) > get<0>(y);
  });
  while(p < x) {
    passed[A[p].second] = true;
    p++;
  }

  sort(ALL(B), [](const auto &x, const auto &y){
    return get<0>(x) == get<0>(y) ? get<1>(x) < get<1>(y) : get<0>(x) > get<0>(y);
  });
  int cnt = 0;
  while(p < x+y && cnt < n) {
    if (!passed[B[cnt].second]) {
      passed[B[cnt].second] = true;
      p++;
    }
    cnt++;
  }

  sort(ALL(C), [](const auto &x, const auto &y){
    return get<0>(x) == get<0>(y) ? get<1>(x) < get<1>(y) : get<0>(x) > get<0>(y);
  });
  cnt = 0;
  while(p < x+y+z && cnt < n) {
    if (!passed[C[cnt].second]) {
      passed[C[cnt].second] = true;
      p++;
    }
    cnt++;
  }

  // output
  for (int i=0; i<n; i++) {
    if (passed[i]) cout << i+1 << '\n'; 
  }

  // for (auto p : C)  cout << p.first << " " << p.second << endl;
  // VIEW(passed);
  return 0;

}