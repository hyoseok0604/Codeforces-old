/*
    Contest Name : Codeforces Round #661 (Div. 3)
    Problem Title : A - Remove Smallest
    Problem Url : https://codeforces.com/contest/1399/problem/A
    Verdict : Wrong answer on test 2
    Time : 15 ms
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

        bool flag = true;
        rep(i, 1, n){
            if(abs(arr[i] - arr[i-1]) >= 2) flag = false;
        }

        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}