/*
    Contest Name : Educational Codeforces Round 93 (Rated for Div. 2)
    Problem Title : A - Bad Triangle
    Problem Url : https://codeforces.com/contest/1398/problem/A
    Verdict : Accepted
    Time : 31 ms
    Memory : 200 KB
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
        cin >> n;
        int arr[n];
        rep(i, 0, n) cin >> arr[i];

        if(arr[0] + arr[1] <= arr[n-1]) cout << "1 2 " << n << '\n';
        else cout << "-1\n";
    }
}