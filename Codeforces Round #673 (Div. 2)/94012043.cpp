/*
    Contest Name : Codeforces Round #673 (Div. 2)
    Problem Title : D - Make Them Equal
    Problem Url : https://codeforces.com/contest/1417/problem/D
    Verdict : Wrong answer on pretest 1
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

        int arr[n+1];
        int suma = 0;
        rep1(i, 1, n) cin >> arr[i], suma += arr[i];

        if(suma % n != 0){
            cout << "-1\n";
            continue;
        }

        int avg = suma / n;
        // rep1(i, 1, n - 1){
        //     int a = i;
        //     int b = i + 1;
        //     // a랑 b를 이용해서 a 위치를 평균 값으로 만들 것
        //     if(arr[a] > avg){
        //         cout << a << ' ' << b << ' ' << b * (arr[a] - avg) << '\n';
        //         arr[b] += arr[a] - avg;
        //     }else if(arr[a] < avg){
        //         cout << b << ' ' << a << ' ' << avg - arr[a] << '\n';
        //         cout << a << ' ' << b << ' ' << avg - arr[a] << '\n';
        //         arr[b] += avg - arr[a];
        //         arr[a] = avg;
        //     }
        // }

        rep1(i, 2, n){
            if(arr[i] <= avg){
                cout << 1 << ' ' << i << ' ' << avg - arr[i] << '\n';
            }else{
                int delta = (arr[i] - avg + i - 1) / i * i - arr[i];
                cout << 1 << ' ' << i << ' ' << delta << '\n';
                cout << i << ' ' << 1 << ' ' << (arr[i] + delta - avg) / i << '\n';
            }
        }
    }
}