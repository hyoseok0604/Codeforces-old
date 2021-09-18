/*
    Contest Name : Codeforces Round #661 (Div. 3)
    Problem Title : B - Gifts Fixing
    Problem Url : https://codeforces.com/contest/1399/problem/B
    Verdict : Accepted
    Time : 31 ms
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

        int a[n];
        int b[n];
        
        int amin, bmin;
        amin = bmin = 1e9;
        rep(i, 0, n){
            cin >> a[i];
            uMin(amin, a[i]);
        }
        rep(i, 0, n){
            cin >> b[i];
            uMin(bmin, b[i]);
        }

        lli ans = 0;
        rep(i, 0, n){
            int agap = a[i] - amin;
            int bgap = b[i] - bmin;
            if(agap > 0 && bgap > 0){
                ans += agap + bgap;
                ans -= min(agap, bgap);
            }else if(agap > 0){
                ans += agap;
            }else if(bgap > 0){
                ans += bgap;
            }
        }

        cout << ans << '\n';
    }
}