// ABC127D

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
  int n, m;
  cin >> n >> m;
  priority_queue<int> A;
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    A.emplace(a);
  }

  priority_queue<pair<int, int>> lst;
  for (int i=0; i<m; i++) {
    int b, c;
    cin >> b >> c;
    lst.emplace(c, b);
  }

  lst.emplace(0, INF);

  // solve
  int cnt = 0;
  long long ans = 0;
  while (cnt < n) {
    if (A.top() >= lst.top().first) {
      ans += A.top();
      A.pop();
      cnt++;
    }
    else {
      auto p = lst.top();
      int ccnt = 0;
      lst.pop();
      while (cnt < n && ccnt < p.second){
        ans += p.first;
        cnt++;
        ccnt++;
      }
    }
  }

  cout << ans << endl;
  return 0;

}