/*
    Contest Name : Codeforces Round #647 (Div. 2) - Thanks, Algo Muse!
    Problem Title : C - Johnny and Another Rating Drop
    Problem Url : https://codeforces.com/contest/1362/problem/C
    Verdict : Accepted
    Time : 93 ms
    Memory : 0 KB
*/

#include<bits/stdc++.h>

using namespace std;

#define lli long long

lli ans = 0;

int main(){
    int t;
    cin >> t;
    while(t--){
        lli ans = 0;
        lli k;
        cin >> k;
        while(k > 0){
            ans += k;
            k /= 2;
        }
        cout << ans << '\n';
    }
}