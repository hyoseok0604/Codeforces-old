/*
    Contest Name : Codeforces Round #683 (Div. 2, by Meet IT)
    Problem Title : A - Add Candies
    Problem Url : https://codeforces.com/contest/1447/problem/A
    Verdict : Accepted
    Time : 30 ms
    Memory : 0 KB
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		
		cout << n - 1 << '\n';
		for(int i = 2 ; i <= n ; i++){
			cout << i << ' ';
		}
		cout << '\n';
	}
}