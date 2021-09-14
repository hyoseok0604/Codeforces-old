/*
    Contest Name : Codeforces Round #713 (Div. 3)
    Problem Title : B - Almost Rectangle
    Problem Url : https://codeforces.com/contest/1512/problem/B
    Verdict : Accepted
    Time : 15 ms
    Memory : 400 KB
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

        string s[n];
        rep(i, 0, n) cin >> s[i];

        int x1, x2;
        int y1, y2;
        bool k = true;
        rep(i, 0, n){
            rep(j, 0, n){
                if(s[i][j] == '*'){
                    if(k) x1 = i, y1 = j, k = false;
                    else x2 = i, y2 = j;
                }
            }
        }

        int ax1 = x1, ax2 = x2;
        int ay1 = y2, ay2 = y1;
        if(x1 == x2){
            if(x1 == n - 1) ax1--, ax2--;
            else ax1++, ax2++;
        }

        if(y1 == y2){
            if(y1 == n - 1) ay1--, ay2--;
            else ay1++, ay2++;
        }

        s[ax1][ay1] = '*';
        s[ax2][ay2] = '*';

        rep(i, 0, n) cout << s[i] << '\n';
    }
}