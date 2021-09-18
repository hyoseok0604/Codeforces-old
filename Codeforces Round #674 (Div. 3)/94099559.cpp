/*
    Contest Name : Codeforces Round #674 (Div. 3)
    Problem Title : F - Number of Subsequences
    Problem Url : https://codeforces.com/contest/1426/problem/F
    Verdict : Wrong answer on test 2
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
    fastIO();

    int n;
    string s;
    cin >> n >> s;

    lli a[3];
    mset(0, a);
    rep(i, 0, n){
        if(s[i] == '?'){
            // ?가 a 일때 복사 후 1 더하기
            int x = a[0], y = a[1], z = a[2];
            a[0] += 1;

            // ? 가 b 일때 복사 후 x 더하기
            a[0] += x;
            a[1] += y;
            a[2] += z;
            a[1] += x;

            // ? 가 c 일때 복사 후 y 더하기
            a[0] += x;
            a[1] += y;
            a[2] += z;
            a[2] += y;
        }
        else if(s[i] == 'a') a[0]++;
        else if(s[i] == 'b') a[1] += a[0];
        else if(s[i] == 'c') a[2] += a[1];

        a[0] %= 1000000007;
        a[1] %= 1000000007;
        a[2] %= 1000000007;
    }

    cout << a[2];

}