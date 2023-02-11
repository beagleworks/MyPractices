// ABC289B

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

  vector<bool> A(n, false);
  for (int i=0; i<m; i++) {
    int a;
    cin >> a;
    a--;
    A[a] = true;
  }

  // solve
  stack<int> st;
  for (int i=0; i<n; i++) {

    if (A[i]) {
      st.emplace(i+1);
    }
    else {
      cout << i+1 << " ";
      while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
      }
    }
  }

  cout << '\n';
  return 0;

}