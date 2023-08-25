// ABC310C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

int main(){

  // input
  int n;
  cin >> n;

  // solve
  int ans = 0;
  set<string> st;
  for (int i=0; i<n; i++) {
    string s;
    cin >> s;
    string t = s;
    auto sz = st.size();
    reverse(ALL(s));
    st.emplace(s);
    st.emplace(t);
    if (st.size() > sz) ans++;
  }

  // output
  cout << ans << endl;
  return 0;

}

/*
setに文字列と反転した文字列両方入れる。
前後でsetのsizeが増加していれば新しい種類の文字列。
st.size()が増えた回数を数えておいて、最終的な増加回数が答え。
*/