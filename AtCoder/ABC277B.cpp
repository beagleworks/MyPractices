// ABC277B
// https://atcoder.jp/contests/abc277/tasks/abc277_b

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
const int INF = 1e9;
const int MOD = 998244353;
const long long LINF = 1e18;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  unordered_set<string> st;
  unordered_set<char> lst1, lst2;
  lst1 = {'H', 'D', 'C', 'S'};
  lst2 = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
  auto size1 = lst1.size(), size2 = lst2.size();
  for (int i=0; i<n; i++){
    string s;
    cin >> s;
    auto sizest = st.size();
    st.insert(s);
    lst1.insert(s[0]);
    lst2.insert(s[1]);
    if (st.size() == sizest || lst1.size() > size1 || lst2.size() > size2){
      cout << "No" << '\n';
      return 0;
    }
  }
  
  cout << "Yes" << '\n';
  return 0;
  
}