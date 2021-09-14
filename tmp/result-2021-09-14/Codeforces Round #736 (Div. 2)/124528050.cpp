/*
    Contest Name : Codeforces Round #736 (Div. 2)
    Problem Title : B - Gregor and the Pawn Game
    Problem Url : https://codeforces.com/contest/1549/problem/B
    Verdict : Accepted
    Time : 31 ms
    Memory : 4400 KB
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
        int n;
        cin >> n;

        string s1, s2;
        cin >> s1 >> s2;

        int ans = 0;
        rep(i, 0, n){
            if(s1[i] == '0' && s2[i] == '1'){
                ans++;
                s1[i] = '2';
                s2[i] = '0';
            }
        }

        rep(i, 0, n){
            if(s2[i] == '1'){
                if(i > 0 && s1[i-1] == '1'){
                    ans++;
                    s1[i-1] = '2';
                    s2[i] = '0';
                }else if(i < n - 1 && s1[i+1] == '1'){
                    ans++;
                    s1[i+1] = '2';
                    s2[i] = '0';
                }
            }
        }

        cout << ans << '\n';
    }
}