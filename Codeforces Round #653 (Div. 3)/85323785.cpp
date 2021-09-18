/*
    Contest Name : Codeforces Round #653 (Div. 3)
    Problem Title : A - Required Remainder
    Problem Url : https://codeforces.com/contest/1374/problem/A
    Verdict : Accepted
    Time : 389 ms
    Memory : 3900 KB
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, n;
        cin >> x >> y >> n;
        cout << (n-y) / x * x + y << '\n';
    }
}