/*
    Contest Name : Codeforces Round #647 (Div. 2) - Thanks, Algo Muse!
    Problem Title : A - Johnny and Ancient Computer
    Problem Url : https://codeforces.com/contest/1362/problem/A
    Verdict : Accepted
    Time : 46 ms
    Memory : 0 KB
*/

#include<bits/stdc++.h>

using namespace std;

#define lli long long

int solve(lli a, lli b){
    if(a > b) swap(a, b);

    int c = 0;

    while(a < b && b % 2 == 0){
        b /= 2;
        c++;
    }

    int x = c / 3;
    int y = c % 3 / 2;
    int z = c % 3 % 2;

    if(a == b) return x + y + z;
    else return -1;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        lli a, b;
        cin >> a >> b;
        cout << solve(a, b) << '\n';
    }
}