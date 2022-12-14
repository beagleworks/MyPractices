// ABC281E

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  // input
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> A(n);
  for (auto &a: A) cin >> a;

  // solve
  multiset<int> ans, rest;
  long long sum = 0LL;
  for (int i=0; i<n; i++) {    
    
    if (i < m) {      
      rest.insert(A[i]);
      if (i == m-1) {
        for (int s=0; s<k; s++) {
          auto itr = rest.begin();
          ans.insert(*itr);
          sum += *itr;
          itr = rest.erase(rest.find(*itr));
        }

        cout << sum << endl;
      }
    }

    else {
      int rem = A[i-m];
      auto itr = ans.rbegin();

      if (A[i] >= *itr) rest.insert(A[i]);
      else {
        ans.insert(A[i]);
        sum += A[i];
      }
      if (rem > *itr) rest.erase(rest.find(rem));
      else {
        ans.erase(ans.find(rem));
        sum -= rem;
      }

      if ((int)ans.size() < k) {
        auto aitr = rest.begin();
        ans.insert(*aitr);
        sum += *aitr;
        rest.erase(rest.find(*aitr));
      }

      else if ((int)ans.size() > k) {
        auto aitr = ans.rbegin();
        rest.insert(*aitr);
        sum -= *aitr;
        ans.erase(ans.find(*aitr));
      }

      cout << sum << endl;
      //for (auto a: ans) cout << a << " ";
      //cout << endl;
    }
  }

  return 0;

}