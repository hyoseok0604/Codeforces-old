/*
    Contest Name : Codeforces Round #671 (Div. 2)
    Problem Title : B - Stairs
    Problem Url : https://codeforces.com/contest/1419/problem/B
    Verdict : Accepted
    Time : 46 ms
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

    lli ans[31];
    ans[0] = 0;
    rep1(i, 1, 31) ans[i] = 2 * ans[i-1] + (lli)pow(2, i-1) * (lli)pow(2, i-1);
    rep1(i, 1, 31) ans[i] += ans[i-1];
    TC{
        lli x;
        cin >> x;
        int a = 0;
        rep1(i, 1, 31){
            if(x >= ans[i]) a = i;
        }

        cout << a << '\n';
    }
}