/*
    Contest Name : Codeforces Round #666 (Div. 2)
    Problem Title : C - Multiples of Length
    Problem Url : https://codeforces.com/contest/1397/problem/C
    Verdict : Accepted
    Time : 124 ms
    Memory : 6000 KB
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
    
    int n;
    cin >> n;

    lli arr[n];
    rep(i, 0, n) cin >> arr[i];

    if(n == 1){
        cout << "1 1" << '\n';
        cout << -arr[0] << '\n';
        cout << "1 1\n0\n1 1\n0";
        return 0;
    }

    cout << "1 1" << '\n';
    cout << -arr[0] << '\n';

    lli a[n], b[n];
    mset(0, a);
    mset(0, b);
    rep(i, 1, n){
        int k = 1;
        if(arr[i] < 0) arr[i] *= -1, k = -1;
        b[i] = n - arr[i] % n;
        a[i] = (arr[i] + b[i]) / n - b[i];

        b[i] *= k;
        a[i] *= k;
    }

    cout << "2 " << n << "\n";
    rep(i, 1, n){
        cout << -b[i] * (n-1) << ' ';
    }
    cout << '\n';

    cout << "1 " << n << '\n';
    rep(i, 0, n){
        cout << -a[i] * n << ' ';
    }
}