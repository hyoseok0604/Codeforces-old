/*
    Contest Name : Educational Codeforces Round 101 (Rated for Div. 2)
    Problem Title : D - Ceil Divisions
    Problem Url : https://codeforces.com/contest/1469/problem/D
    Verdict : Wrong answer on test 1
    Time : 0 ms
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

        int pow2[19];
        rep(i, 0, 19){
            pow2[i] = 1 << i;
        }

        int cur = 0;
        rep1(i, 1, n){
            if(i == pow2[cur]){
                cur++;
                continue;
            }else{
                cout << i << ' ' << pow2[cur-1] << '\n';
            }
        }

        cout << pow2[cur-1] << ' ' << pow2[cur - 2] << '\n';

        rep(i, 0, cur - 2){
            cout << pow2[i] << ' ' << pow2[i+1] << '\n';
        }
    }
}