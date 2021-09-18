/*
    Contest Name : Codeforces Round #683 (Div. 2, by Meet IT)
    Problem Title : B - Numbers Box
    Problem Url : https://codeforces.com/contest/1447/problem/B
    Verdict : Accepted
    Time : 30 ms
    Memory : 0 KB
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		
		int cnt = 0;
		
		int allsum = 0;
		
		int minval = 1e9;
		
		int a[n][m];
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++){
				cin >> a[i][j];
				
				if(a[i][j] <= 0) cnt++, allsum -= a[i][j], minval = min(minval, -a[i][j]);
				else allsum += a[i][j], minval = min(minval, a[i][j]);
			}
		}
		
		if(cnt % 2 == 0){
			cout << allsum << '\n';
		}else{
			cout << allsum - minval * 2 << '\n';
		}
	}
}