/*
    Contest Name : Codeforces Round #670 (Div. 2)
    Problem Title : A - Subset Mex
    Problem Url : https://codeforces.com/contest/1406/problem/A
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

        int a[101];
        mset(0, a);
        rep(i, 0, n){
            int k;
            cin >> k;
            a[k]++;
        }

        int x = 0, y = 0;
        rep(i, 0, 101){
            if(a[i] >= 1) x++;
            else break;
        }

        rep(i, 0, 101){
            if(a[i] >= 2) y++;
            else break;
        }

        cout << x + y << '\n';
    }
}