/*
    Contest Name : Codeforces Round #666 (Div. 2)
    Problem Title : A - Juggling Letters
    Problem Url : https://codeforces.com/contest/1397/problem/A
    Verdict : Accepted
    Time : 46 ms
    Memory : 3700 KB
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

        int count[26];
        mset(0, count);
        rep(i, 0, n){
            string s;
            cin >> s;
            rep(j, 0, s.length()){
                count[s[j] - 'a']++;
            }
        }

        bool flag = true;
        rep(i, 0, 26){
            if(count[i] % n != 0) flag = false;
        }

        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
}