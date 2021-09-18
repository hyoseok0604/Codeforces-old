/*
    Contest Name : Educational Codeforces Round 94 (Rated for Div. 2)
    Problem Title : A - String Similarity
    Problem Url : https://codeforces.com/contest/1400/problem/A
    Verdict : Accepted
    Time : 30 ms
    Memory : 100 KB
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
#define rep(i, a, b) for(int i = (a) ; i < (b) ; i++)
#define rep1(i, a, b) for(int i = (a) ; i <= (b) ; i++)
#define rep2(i, a, b) for(int i = (a) ; i >= (b) ; i--)

int main(){
    fastIO();

    TC{
        int n;
        string s;
        cin >> n >> s;

        rep(i, 0, n){
            cout << s[i * 2];
        }
        cout << '\n';
    }
}