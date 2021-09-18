/*
    Contest Name : Codeforces Round #664 (Div. 2)
    Problem Title : A - Boboniu Likes to Color Balls
    Problem Url : https://codeforces.com/contest/1395/problem/A
    Verdict : Accepted
    Time : 31 ms
    Memory : 0 KB
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
        lli r, g, b, w;
        cin >> r >> g >> b >> w;

        int odd = 0, even = 0;
        lli sum = r + g + b + w;
        if(r % 2 == 1) odd++;
        else even++;
        if(g % 2 == 1) odd++;
        else even++;
        if(b % 2 == 1) odd++;
        else even++;
        if(w % 2 == 1) odd++;
        else even++;
        if(sum % 2 == 0){
            if(even == 4) cout << "YES\n";
            else if(odd == 4 && r > 0 && g > 0 && b > 0) cout << "YES\n";
            else cout << "NO\n";
        }else{
            if(odd == 1) cout << "YES\n";
            else if(even == 1 && r > 0 && g > 0 && b > 0) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}