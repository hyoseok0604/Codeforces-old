/*
    Contest Name : Good Bye 2020
    Problem Title : C - Canine poetry
    Problem Url : https://codeforces.com/contest/1466/problem/C
    Verdict : Wrong answer on pretest 2
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

    TC{
        string s;
        cin >> s;

        int ans = 0;

        int l = s.length();

        rep(i, 1, l-1){
            if(s[i-1] == s[i+1]){
                char c = 'a';
                while(c == s[i-1] || c == s[i] || (i < l - 2 && c == s[i+2]) || (i < l - 3 && c == s[i+3])) c++;
                s[i+1] = c;
                ans++;
                i++;
            }
        }

        // cout << s << '\n';
        rep(i, 1, l){
            if(s[i] == s[i-1]){
                char c = 'a';
                while(c == s[i-1] || (i < l - 1 && c == s[i+1]) || (i < l - 2 && c == s[i+2])) c++;
                s[i] = c;
                ans++;
            }
        }
        
        cout << ans << '\n';
    }
}