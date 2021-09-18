/*
    Contest Name : Codeforces Round #653 (Div. 3)
    Problem Title : C - Move Brackets
    Problem Url : https://codeforces.com/contest/1374/problem/C
    Verdict : Accepted
    Time : 31 ms
    Memory : 3600 KB
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        int count = 0;
        string s;
        cin >> s;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '(') ans++;
            if(s[i] == ')') ans--;
            count = min(ans, count);
        }
        cout << -count << '\n';
    }
}