/*
    Contest Name : Codeforces Raif Round 1 (Div. 1 + Div. 2)
    Problem Title : C - ABBB
    Problem Url : https://codeforces.com/contest/1428/problem/C
    Verdict : Accepted
    Time : 46 ms
    Memory : 600 KB
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

        stack<char> stk;
        rep(i, 0, s.length()){
            if(stk.size() > 0 && stk.top() == 'A' && s[i] == 'B') stk.pop();
            else if(stk.size() > 0 && stk.top() == 'B' && s[i] == 'B') stk.pop();
            else stk.push(s[i]);
        }

        cout << stk.size() << '\n';
    }
}