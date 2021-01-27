/*
Rank A
All test cases passed
累積和を最初に保存しておけば計算量はO(n)
*/

#include <bits/stdc++.h>
using namespace std;
int main(void){
    
    int n,k;
    cin >> n >> k;
    
    // 累積和を保存
    vector<int> s(n+1, 0);
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        s[i+1] = s[i] + x;
    }

    int lft, rgt, count = 1, maxv = 0, day_start = 1;
    for (int i=0; i<n-k+1; i++){
        lft = i;
        rgt = i+k;
        int cv = s[rgt] - s[lft];
        if (cv == maxv){
            count++;
        }
        else if (cv > maxv){
            maxv = cv;
            count = 1;
            day_start = i+1;
        }
    }

    cout << count << " " << day_start << endl;
    return 0;
}