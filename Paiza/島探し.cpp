/*
Rank S
All test cases passed
checkは四方のマスを調べる関数
*/

#include <bits/stdc++.h>
using namespace std;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
int N, M;
vector<vector<int>> v;
stack<pair<int, int>> st;

void check(int h, int w){

  st.push({h, w});

  while (!st.empty()){

    pair<int, int> p = st.top();
    st.pop();

    int hq = p.first;
    int wq = p.second;

    v[hq][wq] = 0;
    for (int i = 0; i < 4; i++){
      int nh = hq + dx[i];
      int nw = wq + dy[i];

      // 枠外、もしくは海
      if (nh < 0 || nw < 0 || nh >= M || nw >= N || v[nh][nw] == 0){
        continue;
      }

      st.push({nh, nw});
    }
  }

  return;
}

int main(){

  cin >> N >> M;

  v.assign(M, vector<int>(N, 0));

  int ans = 0;

  for (int i = 0; i < M; i++){
    for (int j = 0; j < N; j++){
      int p;
      cin >> p;
      v[i][j] = p;
    }
  }

  for (int i = 0; i < M; i++){
    for (int j = 0; j < N; j++){
      if (v[i][j] == 1){
        ans++;
        check(i, j);
      }
    }
  }

  cout << ans << endl;
  return 0;
}