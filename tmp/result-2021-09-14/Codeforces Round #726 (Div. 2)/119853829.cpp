/*
    Contest Name : Codeforces Round #726 (Div. 2)
    Problem Title : E1 - Erase and Extend (Easy Version)
    Problem Url : https://codeforces.com/contest/1537/problem/E1
    Verdict : Wrong answer on pretest 3
    Time : 15 ms
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

#define cout1(a) cout << a << '\n'
#define cout2(a, b) cout << a << ' ' << b << '\n'
#define cout3(a, b, c) cout << a << ' ' << b << ' ' << c << '\n'
#define cout4(a, b, c, d) cout << a << ' ' << b << ' ' << c << ' ' << d << '\n'

int main(){
    fastIO();

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    char ans[k];
    rep(i, 0, k) ans[i] = 'z';

    rep1(i, 1, n){
        bool isSkip = false;
        bool isChg = false;
        rep(j, 0, k){
            if(ans[j] < s[j % i]) isSkip = true;
            if(ans[j] > s[j % i]) isChg = true;

            if(isChg) ans[j] = s[j % i];
            if(isSkip) break;
        }
    }

    rep(i, 0, k) cout << ans[i];
}