// ABC300B

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

  deque<string> A, B;
  for (int i=0; i<h; i++) {
    string s;
    cin >> s;
    A.emplace_back(s);
  }
  for (int i=0; i<h; i++) {
    string s;
    cin >> s;
    B.emplace_back(s);
  }

  // solve
  for (int i=0; i<h; i++) {
    string s = A.front();
    A.pop_front();
    A.emplace_back(s);
    for (int j=0; j<=w; j++) {
      for (int r=0; r<h; r++) {
        string s = A.front();
        A.pop_front();
        char c = s[0];
        s = s.substr(1) + c;
        A.emplace_back(s);
      }
      if (A == B) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  // output
  cout << "No" << endl;
  return 0;

}