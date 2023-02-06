// KEYENCE2019_C

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()

int main(){

  // input
  int n;
  cin >> n;

  vector<int> A(n), B(n);
  for (auto &a : A) cin >> a;
  for (auto &b : B) cin >> b;

  // solve
  vector<int> D(n);
  int ans = 0;
  long long score = 0;
  for (int i=0; i<n; i++) {
    D[i] = A[i] - B[i];
    if (D[i] < 0) {
      ans++;
      score += D[i];
    }
  }

  sort(ALL(D), greater<int>());
  for (int i=0; i<n; i++) {
    if (score < 0) {
      score += D[i];
      ans++;
    }
    else break;
  }

  // output
  cout << (score < 0 ? -1 : ans) << endl;
  return 0;

}