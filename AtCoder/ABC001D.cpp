// ABC001D

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
  int n;
  cin >> n;

  // solve
  auto adj = [&](string s, int f) {
    int ss = stoi(s);
    int h = ss / 100;
    ss %= 100;
    if (ss == 0 && f == 1) ss = -1;
    else ss = (ss-f)/5;
    return ss+h*12;
  };

  auto adj2 = [&](int a) {
    int h = a / 12;
    a %= 12;
    string hh = (h < 10 ? "0" : "") + to_string(h);
    string mm = (a < 2 ? "0" : "") + to_string(a*5);
    return hh + mm;
  };

  vector<bool> ans(289, false);
  for (int i=0; i<n; i++) {
    string x;
    cin >> x;
    string s = x.substr(0, 4), e = x.substr(5);
    int st = adj(s, 0), et = adj(e, 1);
    for (int i=st; i<=et; i++) {
      ans[i] = true;
    }
  }

  // output
  bool cont = false;
  for (int i=0; i<289; i++) {
    if (i == 288 && ans[i]) {
      cout << "2400" << endl;
    }
    else if (ans[i]) {
      if (!cont) {
        cout << adj2(i) << "-";
        cont = true;
      }
    }
    else if (cont) {
      cout << adj2(i) << endl;
      cont = false;
    }
  }

  return 0;
}