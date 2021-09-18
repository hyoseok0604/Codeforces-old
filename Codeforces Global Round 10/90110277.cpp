/*
    Contest Name : Codeforces Global Round 10
    Problem Title : C - Omkar and Waterslide
    Problem Url : https://codeforces.com/contest/1392/problem/C
    Verdict : Wrong answer on pretest 2
    Time : 46 ms
    Memory : 1200 KB
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

        int goal[n];
        int m = 0;
        rep(i, 0, n){
            m = max(m, arr[i]);
            goal[i] = m;
        }

        int gap[n];
        rep(i, 0, n){
            gap[i] = goal[i] - arr[i];
        }

        int ans = 0;
        rep(i, 0, n){
            int mx = 0;
            while(gap[i] != 0 && i < n){
                mx = max(mx, gap[i++]);
            }
            ans += mx;
        }
        cout << ans << '\n';
    }
}