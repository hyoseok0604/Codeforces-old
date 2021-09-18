/*
    Contest Name : Codeforces Round #671 (Div. 2)
    Problem Title : A - Digit Game
    Problem Url : https://codeforces.com/contest/1419/problem/A
    Verdict : Accepted
    Time : 31 ms
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

    TC{
        int n;
        string s;
        cin >> n >> s;

        bool a = false; // raze
        bool b = false; // breach
        rep(i, 0, n){
            if(i % 2 == 0){
                if((s[i] - '0') % 2 == 1){
                    a = true;
                }
            }else{
                if((s[i] - '0') % 2 == 0){
                    b = true;
                }
            }
        }

        if(n % 2 == 0){
            if(b){
                cout << "2\n";
            }else{
                cout << "1\n";
            }
        }else{
            if(a){
                cout << "1\n";
            }else{
                cout << "2\n";
            }
        }
    }
}