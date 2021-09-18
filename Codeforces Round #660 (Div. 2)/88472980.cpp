/*
    Contest Name : Codeforces Round #660 (Div. 2)
    Problem Title : B - Captain Flint and a Long Voyage
    Problem Url : https://codeforces.com/contest/1388/problem/B
    Verdict : Wrong answer on pretest 2
    Time : 46 ms
    Memory : 3600 KB
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
    TC{
        int n;
        cin >> n;

        rep(i, 0, n-1){
            cout << '9';
        }

        cout << '8';
        cout << '\n';
    }
}