/*
    Contest Name : Codeforces Round #730 (Div. 2)
    Problem Title : C - Need for Pink Slips
    Problem Url : https://codeforces.com/contest/1543/problem/C
    Verdict : Wrong answer on pretest 1
    Time : 15 ms
    Memory : 100 KB
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

lli ans = 0;

lli m = 10000000;

void f3(lli p, lli a, lli x, int step){
    ans += p * a / m * step;
}

void f2(lli p, lli a, lli b, lli x, int step){
    ans += p * b / m * step;

    if(a <= x) f3(p * a / m, b + a, x, step + 1);
    else f2(p * a / m, a - x, b + x, x, step + 1);
}

void f1(lli p, lli a, lli b, lli c, lli x, int step){
    ans += p * c / m * step;

    if(a <= x) f2(p * a / m, b + a / 2, c + a / 2, x, step + 1);
    else f1(p * a / m, a - x, b + x / 2, c + x / 2, x, step + 1);
    if(b <= x) f2(p * b / m, a + b / 2, c + b / 2, x, step + 1);
    else f1(p * b / m, a + x / 2, b - x, c + x / 2, x, step + 1);
}

int main(){
    fastIO();

    TC{
        long double a, b, c, x;
        cin >> a >> b >> c >> x;

        lli a2, b2, c2, x2;

        a2 = a * m;
        b2 = b * m;
        c2 = c * m;
        x2 = x * m;

        ans = 0;

        f1(m, a2, b2, c2, x2, 1);

        long double q = 1;
        cout << fixed;
        cout.precision(10);
        cout << q * ans / m << '\n';
    }
}