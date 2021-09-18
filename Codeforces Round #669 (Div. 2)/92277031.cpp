/*
    Contest Name : Codeforces Round #669 (Div. 2)
    Problem Title : C - Chocolate Bunny
    Problem Url : https://codeforces.com/contest/1407/problem/C
    Verdict : Wrong answer on pretest 1
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

#define rep(i, a, b) for(int i = (a) ; i < (b) ; i++)
#define rep1(i, a, b) for(int i = (a) ; i <= (b) ; i++)
#define rep2(i, a, b) for(int i = (a) ; i >= (b) ; i--)

#define cout1(a) cout << a << '\n'
#define cout2(a, b) cout << a << ' ' << b << '\n'
#define cout3(a, b, c) cout << a << ' ' << b << ' ' << c << '\n'
#define cout4(a, b, c, d) cout << a << ' ' << b << ' ' << c << ' ' << d << '\n'

int main(){
    // fastIO();

    int n;
    cin >> n;

    int arr[n+1];
    mset(0, arr);

    rep(i, 1, n){
        cout << "? " << i << ' ' << i + 1 << endl;
        cout.flush();

        int k1;
        cin >> k1;

        cout << "? " << i + 1 << ' ' << i << endl;
        cout.flush();

        int k2;
        cin >> k2;

        if(k1 > k2) arr[i] = k1;
        else arr[i+1] = k2;
    }

    cout << "? " << n << ' ' << 1 << endl;
    cout.flush();

    int k1;
    cin >> k1;

    cout << "? " << 1 << ' ' << n << endl;
    cout.flush();

    int k2;
    cin >> k2;

    if(k1 > k2) arr[n] = k1;
    else arr[1] = k2;

    cout << "! ";
    rep1(i, 1, n){
        cout << arr[i] << ' ';
    }
}