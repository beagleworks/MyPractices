#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
typedef long long ll;

int t;
vector<int> Ans;
void input(){
  cin >> t;
}

void solve(){
  int n;
  cin >> n;
  vector<pair<int, int>> A(n);
  for (int i=0; i<n; i++) {
    int a;
    cin >> a;
    A.emplace_back(a, i);
  }

  sort(ALL(A), greater());
  vector<int> ans(n);
  for (int i=0; i<n; i++) {
    ans[A[i].second] = i+1;
  }
  for (int i=0; i<n; i++) {
    cout << ans[i];
    cout << (i == n-1 ? '\n' : ' ');
  }
  return;
}

int main(){

  input();
  for (int i=0; i<t; i++) solve();

  return 0;

}