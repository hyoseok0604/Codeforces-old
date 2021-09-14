/*
    Contest Name : Educational Codeforces Round 106 (Rated for Div. 2)
    Problem Title : B - Binary Removals
    Problem Url : https://codeforces.com/contest/1499/problem/B
    Verdict : Wrong answer on test 2
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

        int f1, f2;
        f1 = f2 = -1;
        rep(i, 0, s.length()){
            if(s[i] == '1'){
                if(i > 0 && s[i-1] == '1') f1 = i;
            }
            if(s[i] == '0'){
                if(i > 0 && s[i-1] == '0') f2 = i;
            }
        }

        if(f1 != -1 && f2 != -1 && f2 > f1){
            cout << "NO\n";
        }else cout << "YES\n";
    }
}