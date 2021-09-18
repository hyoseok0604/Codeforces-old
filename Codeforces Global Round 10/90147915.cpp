/*
    Contest Name : Codeforces Global Round 10
    Problem Title : C - Omkar and Waterslide
    Problem Url : https://codeforces.com/contest/1392/problem/C
    Verdict : Accepted
    Time : 93 ms
    Memory : 800 KB
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

        lli ans = 0;
        rep2(i, n - 1, 1){
            if(arr[i-1] > arr[i]){
                ans += arr[i-1] - arr[i];
            }
        }
        cout << ans << '\n';
    }
}