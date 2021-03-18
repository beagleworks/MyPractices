/*
Rank A
All test cases passed
連休初日を固定し、有給を使い切るまで連休を伸ばす
伸ばしきったら連休初日を移動する
移動することによって新たに連休が設定できるようになれば再度伸ばす
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int N, L;
    cin >> N >> L;
    vector<int> days(N);
    for (int i=0; i<N; i++) cin >> days[i];
    
    int ans = 0, d = 0, l = L;
    int lt = 0, rt = 0;
    while (lt < N && rt < N){
        if (days[rt] == 1){
            d++;
            ans = max(d, ans);
            rt++;
        }
        else if (l > 0){
            l--;
            d++;
            ans = max(d, ans);
            rt++;
        }
        else{
            if (days[lt] == 0) l++;
            d--;
            lt++;
        }
    }

    cout << ans << endl;
    return 0;
  
}