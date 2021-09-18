/*
    Contest Name : Educational Codeforces Round 92 (Rated for Div. 2)
    Problem Title : A - LCM Problem
    Problem Url : https://codeforces.com/contest/1389/problem/A
    Verdict : Accepted
    Time : 46 ms
    Memory : 3700 KB
*/

#include<bits/stdc++.h>

using namespace std;

#define lli long long
#define TC int TC;cin>>TC;while(TC--)
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0)
#define uMin(a, b) a = min(a, b)
#define uMax(a, b) a = max(a, b)
#define mset(a, arr) memset(arr, a, sizeof(arr))
#define piii pair<lli, pair<lli, lli>>
#define piiii pair<pair<lli, lli>, pair<lli, lli>>
#define ff first
#define ss second
#define rep(i, a, b) for(int i = a ; i < b ; i++)
#define repR(i, a, b) for(int i = a ; i > b ; i--)

int main(){
    fastIO();

    TC{
        int l, r;
        cin >> l >> r;

        if(l * 2 > r){
            cout << "-1 -1\n";
        }else{
            cout << l << ' ' << l * 2 << '\n';
        }
    }
}