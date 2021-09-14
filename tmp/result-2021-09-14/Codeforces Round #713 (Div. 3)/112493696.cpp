/*
    Contest Name : Codeforces Round #713 (Div. 3)
    Problem Title : C - A-B Palindrome
    Problem Url : https://codeforces.com/contest/1512/problem/C
    Verdict : Accepted
    Time : 31 ms
    Memory : 500 KB
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
        int a, b;
        cin >> a >> b;

        string s;
        cin >> s;

        int n = s.length() - 1;

        bool f = false;

        rep(i, 0, s.length() / 2){
            if(s[i] == '?'){
                s[i] = s[n-i];
            }
            if(s[n-i] == '?'){
                s[n-i] = s[i];
            }

            if(s[i] != s[n-i]) f = true;
        }

        if(f){
            cout << "-1\n";
            continue;
        }

        rep(i, 0, s.length()){
            if(s[i] == '0') a--;
            if(s[i] == '1') b--;
        }

        if(a < 0 || b < 0){
            cout << "-1\n";
            continue;
        }

        if(s.length() % 2 == 0){
            if(a % 2 != 0 || b % 2 != 0){
                cout << "-1\n";
                continue;
            }
        }else{
            if(s[s.length() / 2] == '?'){
                if((a + b) % 2 != 1){
                    cout << "-1\n";
                    continue;
                }
            }else{
                if(a % 2 != 0 || b % 2 != 0){
                    cout << "-1\n";
                    continue;
                }
            }
        }

        if(s[s.length() / 2] == '?'){
            if(a % 2 == 1){
                s[s.length() / 2] = '0';
                a--;
            }else{
                s[s.length() / 2] = '1';
                b--;
            }
        }

        rep(i, 0, s.length() / 2){
            if(s[i] == '?'){
                if(a > 0){
                    s[i] = s[n - i] = '0';
                    a -= 2;
                }else{
                    s[i] = s[n - i] = '1';
                    b -= 2;
                }
            }
        }

        cout << s << '\n';
    }
}