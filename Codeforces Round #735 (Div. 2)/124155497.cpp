/*
    Contest Name : Codeforces Round #735 (Div. 2)
    Problem Title : C - Mikasa
    Problem Url : https://codeforces.com/contest/1554/problem/C
    Verdict : Wrong answer on pretest 1
    Time : 0 ms
    Memory : 3600 KB
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
        int n, m;
        cin >> n >> m;

        int tmp = m + 1;
        while((n ^ tmp) > m) tmp++;

        cout << (tmp ^ n) << '\n';
    }

    // 0000000001000101
    // 0000001010111000
    // 0000001010000000

    // 00000000000000011110001001000000

    // 00000000000010011111101111110001

    // 00000000000010000001100110110010
}