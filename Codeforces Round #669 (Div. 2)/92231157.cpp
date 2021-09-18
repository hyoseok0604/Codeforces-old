/*
    Contest Name : Codeforces Round #669 (Div. 2)
    Problem Title : A - Ahahahahahahahaha
    Problem Url : https://codeforces.com/contest/1407/problem/A
    Verdict : Wrong answer on pretest 2
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

        int a = 0, b = 0;
        int arr[n];
        rep(i, 0, n){
            cin >> arr[i];
            if(i % 2 == 0) a += arr[i];
            else b += arr[i];
        }

        if(n == 2 && arr[0] != arr[1]){
            cout << "1\n0\n";
            continue;
        }

        if(a == b){
            cout << n << '\n';
            rep(i, 0, n){
                cout << arr[i] << ' ';
            }
        }else if(a > b){
            cout << (a - b) * 2 << '\n';
            for(int i = 0 ; i < n ; i += 2){
                if(arr[i] == 1 && arr[i+1] == 0) continue;
                cout << arr[i] << ' ' << arr[i+1] << ' ';
            }
        }else if(a < b){
            cout << (b - a) * 2 << '\n';
            for(int i = 0 ; i < n ; i += 2){
                if(arr[i] == 0 && arr[i+1] == 1) continue;
                cout << arr[i] << ' ' << arr[i+1] << ' ';
            }
        }

        cout << '\n';
    }
}