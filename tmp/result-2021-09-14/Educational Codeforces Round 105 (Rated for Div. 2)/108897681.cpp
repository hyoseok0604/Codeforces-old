/*
    Contest Name : Educational Codeforces Round 105 (Rated for Div. 2)
    Problem Title : B - Berland Crossword
    Problem Url : https://codeforces.com/contest/1494/problem/B
    Verdict : Wrong answer on test 2
    Time : 30 ms
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
        int n, u, r, d, l;
        cin >> n >> u >> r >> d >> l;

        int U, R, D, L;

        U = R = D = L = 0;

        bool flag = false;
        if(n == 2){
            rep(i, 0, 2){
                rep(j, 0, 2){
                    rep(k, 0, 2){
                        rep(q, 0, 2){
                            if(i + j == u && j + k == r && k + q == d && q + i == l) flag = true;
                        }
                    }
                }
            }
        }

        if(u == n || d == n){
            R++;
            L++;
        }
        if(r == n || l == n){
            U++;
            D++;
        }

        if(u == n && d == n){
            R++;
            L++;
        }

        if(r == n && l == n){
            U++;
            D++;
        }

        if(n == 2){
            if(flag) cout << "YES\n";
            else cout << "NO\n";
        }else if(u >= U && d >= D && l >= L && r >= R) cout << "YES\n";
        else cout << "NO\n";
    }
}