/*
    Contest Name : Good Bye 2020
    Problem Title : C - Canine poetry
    Problem Url : https://codeforces.com/contest/1466/problem/C
    Verdict : Wrong answer on pretest 2
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

#define cout1(a) cout << a << '\n'
#define cout2(a, b) cout << a << ' ' << b << '\n'
#define cout3(a, b, c) cout << a << ' ' << b << ' ' << c << '\n'
#define cout4(a, b, c, d) cout << a << ' ' << b << ' ' << c << ' ' << d << '\n'

int main(){
    fastIO();

    TC{
        string s;
        cin >> s;

        int cnt1 = 0;
        int cnt2 = 0;
        int cnt = 0;
        rep(i, 2, s.length()){
            if(s[i] == s[i-2]){
                if(i % 2 == 0) cnt1++;
                else cnt2++;
            }
        }
        rep(i, 1, s.length()){
            if(s[i] == s[i-1]) cnt++;
        }

        int a1 = max(cnt1, cnt2);
        int a2;
        if(a1 == 0) a2 = cnt != 0;
        if(a1 > 0) a2 = cnt > 1;

        cout << a1 + a2 << '\n';
    }
}