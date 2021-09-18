/*
    Contest Name : Codeforces Round #669 (Div. 2)
    Problem Title : A - Ahahahahahahahaha
    Problem Url : https://codeforces.com/contest/1407/problem/A
    Verdict : Wrong answer on pretest 3
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
        cin >> n;

        int z = 0, o = 0;
        int a = 0, b = 0;
        int arr[n];
        rep(i, 0, n){
            cin >> arr[i];
            if(i % 2 == 0) a += arr[i];
            else b += arr[i];
            if(arr[i] == 0) z++;
            else o++;
        }

        if(a == b){
            cout << n << '\n';
            rep(i, 0, n){
                cout << arr[i] << ' ';
            }
        }else if(z < o){
            cout << n / 2 << '\n';
            rep(i, 0, n / 2){
                cout << "1 ";
            }
        }else{
            cout << n / 2 << '\n';
            rep(i, 0, n / 2){
                cout << "0 ";
            }
        }
        cout << '\n';
    }
}