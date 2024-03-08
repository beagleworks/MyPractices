#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
typedef long long ll;

int t;
void input(){
  cin >> t;
}

void solve(){
  int a, b, n;
  cin >> a >> b >> n;

  vector<int> A(n);
  for (auto &e : A) cin >> e;

  ll ans = b;
  for (auto e : A) {
    ans += min(a-1, e);
  }

  cout << ans << '\n';
  
}
int main(){

  input();

  for (int i=0; i<t; i++) solve();

  return 0;

}