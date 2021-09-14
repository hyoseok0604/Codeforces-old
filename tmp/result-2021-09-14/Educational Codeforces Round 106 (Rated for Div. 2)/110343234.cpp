/*
    Contest Name : Educational Codeforces Round 106 (Rated for Div. 2)
    Problem Title : B - Binary Removals
    Problem Url : https://codeforces.com/contest/1499/problem/B
    Verdict : Accepted
    Time : 30 ms
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

        bool isZero = true;
        bool isOne = false;
        int beforeIndex = s.length() + 2;
        bool ans = true;
        rep2(i, s.length()-1, 0){
            if(s[i] == '0'){
                if(isZero){
                    if(beforeIndex - i == 1){
                        // cout2(i, "a");
                        isZero = false;
                        isOne = true;
                    }else{
                        // cout2(i, "b");
                        beforeIndex = i;
                    }
                }
            }else{
                if(isOne){
                    if(beforeIndex - i == 1){
                        // cout2(i, "c");
                        ans = false;
                    }else{
                        // cout2(i, "d");
                        beforeIndex = i;
                    }
                }
            }
        }

        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }
}