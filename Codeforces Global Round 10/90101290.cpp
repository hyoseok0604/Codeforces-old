/*
    Contest Name : Codeforces Global Round 10
    Problem Title : B - Omkar and Infinity Clock
    Problem Url : https://codeforces.com/contest/1392/problem/B
    Verdict : Accepted
    Time : 124 ms
    Memory : 2300 KB
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
        lli n, k;
        cin >> n >> k;

        int arr[n];
        int mx = -2000000000;
        int mx2 = -2000000000;
        rep(i, 0, n) cin >> arr[i], uMax(mx, arr[i]);

        int arr1[n];
        int arr2[n];
        rep(i, 0, n){
            arr1[i] = mx - arr[i], uMax(mx2, arr1[i]);
        }
        
        rep(i, 0, n){
            arr2[i] = mx2 - arr1[i];
        }

        if(k % 2 == 0){
            rep(i, 0, n) cout << arr2[i] << ' ';
            cout << '\n';
        }else{
            rep(i, 0, n) cout << arr1[i] << ' ';
            cout << '\n';
        }
    }
}