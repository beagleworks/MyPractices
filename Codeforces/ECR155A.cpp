#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()

int t;
void input(){
  cin >> t;
}

void solve(){
  int n;
  cin >> n;

  vector<int> P(n), E(n);
  for (int i=0; i<n; i++) {
    cin >> P[i] >> E[i];
  }

  for (int i=1; i<n; i++) {
    if (P[i] < P[0]) continue;
    if (E[i] < E[0]) continue;
    cout << -1 << endl;
    return;
  }

  cout << P[0] << endl;
  return;
  
}
int main(){

  input();

  for (int i=0; i<t; i++) solve();

  return 0;

}