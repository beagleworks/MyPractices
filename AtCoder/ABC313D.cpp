// ABC313D

#include <bits/stdc++.h>
using namespace std;
#define ALL(a) (a).begin(), (a).end()
constexpr int INF = 1009876543;
constexpr long long LINF = 2211009988776543210LL;
constexpr int MOD = 998244353;

void output(vector<int> &V) {
  cout << "? ";
  for (int i=0; i<(int)V.size(); i++) {
    cout << V[i];
    if (i != (int)V.size() - 1) cout << " ";
  }
  cout << endl;
  return;
}


int main(){

  // input
  int n, k;
  cin >> n >> k;

  // solve
  vector<int> ans(n+1), vec(k+2);
  int sum = 0;

  // 頭のk+1項を算出
  for (int i=1; i<=k+1; i++) {
    vector<int> V;
    for (int j=i; j<i+k; j++) {
      int p = (j > k+1 ? j % (k+1) : j);
      V.emplace_back(p);
    }
    output(V);
    int res;
    cin >> res;
    sum += res;
    vec[i] = res;
  }

  int u = sum % 2;
  for (int i=1; i<=k; i++) {
    ans[i] = (u + vec[i+1]) % 2;
  }
  ans[k+1] = (u + vec[1]) % 2;

  // 頭のk-1項を使って 残りのk+2以降を算出
  int v = 0;
  for (int i=1; i<k; i++) v += ans[i];
  v %= 2;

  vector<int> W(k);
  iota(ALL(W), 1);
  for (int i=k+2; i<=n; i++) {
    W[k-1] = i;
    output(W);
    int res;
    cin >> res;
    ans[i] = (v + res) % 2;
  }

  // output
  cout << "!";
  for (int i=1; i<=n; i++) {
    cout << " " << ans[i];
  }
  cout << endl;
  return 0;

}

/*
頭のk+1元連立1次方程式を先に解く
k+2項目以降は、1項目からk-1項目を使えば順に求まる
*/