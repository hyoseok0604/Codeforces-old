/*
    Contest Name : Codeforces Round #693 (Div. 3)
    Problem Title : A - Cards for Friends
    Problem Url : https://codeforces.com/contest/1472/problem/A
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
        lli w, h, n;
        cin >> w >> h >> n;

        lli c1 = 1, c2 = 1;
        while(w % 2 == 0) w /= 2, c1 *= 2;
        while(h % 2 == 0) h /= 2, c2 *= 2;

        if(c1 * c2 >= n) cout << "YES\n";
        else cout << "NO\n";
    }
}