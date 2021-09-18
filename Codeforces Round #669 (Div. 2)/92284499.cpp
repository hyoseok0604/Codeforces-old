/*
    Contest Name : Codeforces Round #669 (Div. 2)
    Problem Title : C - Chocolate Bunny
    Problem Url : https://codeforces.com/contest/1407/problem/C
    Verdict : Wrong answer on pretest 2
    Time : 15 ms
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
    // fastIO();

    int n;
    cin >> n;

    int arr[n+1];
    mset(0, arr);

    bool isclear[n+1];
    mset(0, isclear);

    int l = 1, r = 2;
    int cnt = 0;
    while(cnt < n - 1){
        cout << "? " << l << ' ' << r << endl;
        cout.flush();

        int k1;
        cin >> k1;

        cout << "? " << r << ' ' << l << endl;
        cout.flush();

        int k2;
        cin >> k2;

        if(k1 > k2){
            arr[l] = k1;
            isclear[l] = true;
            cnt++;
            if(cnt == n - 1) break;
            while(isclear[l] || l == r){
                l++;
                if(l > n) l = 1;
            }
        }else{
            arr[r] = k2;
            isclear[r] = true;
            cnt++;
            if(cnt == n - 1) break;
            while(isclear[r] || l == r){
                r++;
                if(r > n) r = 1;
            }
        }
    }

    bool isused[n+1];
    mset(0, isused);
    int idx = -1;
    rep1(i, 1, n){
        if(arr[i] != 0) isused[i] = true;
        if(arr[i] == 0) idx = i;
    }

    rep1(i, 1, n){
        if(isused[i] == false) arr[idx] = i + 1;
    }

    cout << "! ";
    rep1(i, 1, n){
        cout << arr[i] << ' ';
    }
}