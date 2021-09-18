/*
    Contest Name : Codeforces Round #669 (Div. 2)
    Problem Title : B - Big Vova
    Problem Url : https://codeforces.com/contest/1407/problem/B
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
        cin >> n;

        int arr[n];
        rep(i, 0, n){
            cin >> arr[i];
        }

        sort(arr, arr + n);

        bool isused[n];
        mset(0, isused);
        
        cout << arr[n-1] << ' ';
        isused[n-1] = true;
        
        int cnt = 1;
        int before = arr[n-1];
        while(cnt < n){
            int mx = 0;
            int mxi = -1;
            rep(i, 0, n){
                if(isused[i]) continue;
                int tmp = __gcd(before, arr[i]);
                if(tmp >= mx) mx = tmp, mxi = i;
            }
            cout << arr[mxi] << ' ';
            isused[mxi] = true;
            before = mx;
            cnt++;
        }
        cout << '\n';
    }
}