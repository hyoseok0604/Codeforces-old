/*
    Contest Name : Codeforces Round #690 (Div. 3)
    Problem Title : B - Last Year's Substring
    Problem Url : https://codeforces.com/contest/1462/problem/B
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
        cin >> n;
        
        string s;
        cin >> s;

        bool flag = false;

        rep1(i, 0, 4){
            string tmp = "";
            rep(j, 0, i){
                tmp += s[j];
            }
            rep(j, n - 4 + i, n){
                tmp += s[j];
            }
            if(tmp == "2020") flag = true;
        }

        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}