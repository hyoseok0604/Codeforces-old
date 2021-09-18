/*
    Contest Name : Codeforces Round #706 (Div. 2)
    Problem Title : E - Garden of the Sun
    Problem Url : https://codeforces.com/contest/1496/problem/E
    Verdict : Accepted
    Time : 31 ms
    Memory : 500 KB
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

        string a[n];
        rep(i, 0, n) cin >> a[i];

        for(int i = 0 ; i < n ; i += 3){
            rep(j, 0, m){
                a[i][j] = 'X';
            }
        }

        bool isBridge = true;
        for(int i = 0 ; i < n ; i++){
            if(i % 3 == 0){
                if(!isBridge){
                    a[i-1][0] = 'X';
                    a[i-2][0] = 'X';
                }
                isBridge = false;
                continue;
            }
            rep(j, 0, m){
                if(a[i][j] == 'X'){
                    rep(k, 0, 3){
                        if(i - i % 3 + k < n) a[i - i % 3 + k][j] = 'X';
                    }
                    i += 3 - i % 3 - 1;
                    isBridge = true;
                    break;
                }
            }
        }

        if(n % 3 == 0){
            int i = n - 1;
            rep(j, 0, m){
                if(a[i][j] == 'X'){
                    a[i-1][j] = 'X';
                }
            }
        }

        rep(i, 0, n) cout << a[i] << '\n';
    }
}