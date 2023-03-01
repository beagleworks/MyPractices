// ABC064D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  string s;
  cin >> n >> s;

  // solve
  deque<char> q;
  for (auto c : s) {
    if (!q.empty() && q.back() == '(' && c == ')') q.pop_back();
    else q.emplace_back(c);
  }

  int t = 0, b = 0;
  while (!q.empty()) {
    char c = q.front();
    q.pop_front();
    if (c == ')') t++;
    else b++;
  }

  for (int i=0; i<t; i++) {
    cout << '(';
  }
  cout << s;
  for (int i=0; i<b; i++) {
    cout << ')';
  }

  cout << endl;
  return 0;

}