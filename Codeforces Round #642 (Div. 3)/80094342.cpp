/*
    Contest Name : Codeforces Round #642 (Div. 3)
    Problem Title : A - Most Unstable Array
    Problem Url : https://codeforces.com/contest/1353/problem/A
    Verdict : Wrong answer on test 2
    Time : 46 ms
    Memory : 3600 KB
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        if(n == 1) cout << 0;
        else if(n <= 4) cout << m;
        else cout << m * 2;
        cout << '\n';
    }
}