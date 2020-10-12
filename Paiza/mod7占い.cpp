/*
All test cases passed
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >> n;

	vector<long long> v(7, 0);
	for (int i=0; i<n; i++){
		long long a;
		cin >> a;
		int x = a % 7;
		v[x]++;
	}

	long long ans = 0;
	for (int i=0; i<7; i++){
		for (int j=i; j<7; j++){
			for (int k=j; k<7; k++){

				if ((i + j + k) % 7 == 0){
					// nC3 = nP3/3!
					if (i == j && j == k){
						ans += v[i] * (v[i] - 1) * (v[i] - 2) / 6;
					}
					// nC2*m = (nP2/2!)*m
					else if (i == j){
						ans += (v[i] * (v[i] - 1) / 2) * v[k];
					}
					else if (j == k){
						ans += v[i] * ((v[j] * (v[j] - 1)) / 2);
					}
					else{
						ans += v[i] * v[j] * v[k];
					}
				}
			}
		}
	}

	cout << ans << endl;
	return 0;
}