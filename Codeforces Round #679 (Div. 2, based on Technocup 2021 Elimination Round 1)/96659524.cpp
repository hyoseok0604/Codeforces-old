/*
    Contest Name : Codeforces Round #679 (Div. 2, based on Technocup 2021 Elimination Round 1)
    Problem Title : B - A New Technique
    Problem Url : https://codeforces.com/contest/1435/problem/B
    Verdict : Wrong answer on pretest 2
    Time : 140 ms
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
        int n, m;
        cin >> n >> m;

        int a[n][m];
        rep(i, 0, n){
            rep(j, 0, m){
                cin >> a[i][j];
            }
        }

        int b[m][n];
        rep(i, 0, m){
            rep(j, 0, n){
                cin >> b[i][j];
            }
        }

        int x, y;
        rep(i, 0, n){
            rep(j, 0, m){
                if(a[i][j] == b[0][0]){
                    x = i;
                    y = j;
                }
            }
        }

        rep(i, 0, n){
            int tar = b[0][i];
            rep(j, 0, n){
                if(a[j][y] == tar){
                    rep(k, 0, m){
                        cout << a[j][(y+k) % m] << ' ';
                    }
                }
            }
            cout << '\n';
        }
    }
}