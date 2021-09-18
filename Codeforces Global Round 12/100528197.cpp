/*
    Contest Name : Codeforces Global Round 12
    Problem Title : A - Avoid Trygub
    Problem Url : https://codeforces.com/contest/1450/problem/A
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

#define cout1(a) cout << a << '\n'
#define cout2(a, b) cout << a << ' ' << b << '\n'
#define cout3(a, b, c) cout << a << ' ' << b << ' ' << c << '\n'
#define cout4(a, b, c, d) cout << a << ' ' << b << ' ' << c << ' ' << d << '\n'

int main(){
    fastIO();
    
    TC{
        int n;
        string s;
        cin >> n >> s;

        int alpha[26];
        mset(0, alpha);

        rep(i, 0, s.length()) alpha[s[i]-'a']++;

        rep(i, 0, 26){
            rep(j, 0, alpha[i]) cout << (char) (i + 'a');
        }
        cout << '\n';
    }
}