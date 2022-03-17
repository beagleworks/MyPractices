#include <bits/stdc++.h>
using namespace std;

int main(){

    // input
    int N, W;
    cin >> N >> W;

    vector<int> weight(N), value(N);
    for (int i=0; i<N; i++){
        cin >> weight[i] >> value[i];
    }

    // solve
    vector dp(N+1, vector<long>(W+1, 0));
    for (int i=0; i<N; i++){
        for (int j=0; j<=W; j++){
            // 品物iを選択する
            if (j-weight[i] >= 0){
                dp[i+1][j] = max(dp[i+1][j], dp[i][j-weight[i]] + value[i]);
            }
            // しない
            dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
        }
    }
    
    // output
    cout << dp[N][W] << '\n';
    return 0;
  
}