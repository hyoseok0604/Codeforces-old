/*
    Contest Name : Good Bye 2020
    Problem Title : C - Canine poetry
    Problem Url : https://codeforces.com/contest/1466/problem/C
    Verdict : Wrong answer on pretest 2
    Time : 61 ms
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

#define cout1(a) cout << a << '\n'
#define cout2(a, b) cout << a << ' ' << b << '\n'
#define cout3(a, b, c) cout << a << ' ' << b << ' ' << c << '\n'
#define cout4(a, b, c, d) cout << a << ' ' << b << ' ' << c << ' ' << d << '\n'

bool chg[100001];

void f(string s, int l, int r){
    if(r - l <= 1) return;
    if((r - l) % 2 == 0){
        int m1 = (l + r) / 2 - 1;
        int m2 = (l + r) / 2;
        f(s, l, m1+1);
        f(s, m2, r);
        if(s[m1] == s[m2]){
            if(chg[m1] || chg[m2]){

            }else{
                chg[m1] = true;
            }
        }
    }else{
        int m = (l + r) / 2;
        f(s, l, m+1);
        f(s, m, r);
        if(s[m-1] == s[m+1]){
            if(chg[m-1] || chg[m+1]){

            }else{
                chg[m+1] = true;
            }
        }
    }
}

int main(){
    fastIO();

    TC{
        mset(0, chg);
        string s;
        cin >> s;

        f(s, 0, s.length());

        int ans = 0;
        rep(i, 0, s.length()){
            if(chg[i]) ans++;
        }

        cout << ans << '\n';
    }
}