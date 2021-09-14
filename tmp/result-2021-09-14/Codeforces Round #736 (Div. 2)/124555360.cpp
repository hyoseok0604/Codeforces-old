/*
    Contest Name : Codeforces Round #736 (Div. 2)
    Problem Title : C - Web of Lies
    Problem Url : https://codeforces.com/contest/1549/problem/C
    Verdict : Wrong answer on pretest 1
    Time : 0 ms
    Memory : 3600 KB
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

    int n, m;
    cin >> n >> m;
    
    int in[n+1];
    mset(0, in);

    int ans = 0;

    rep(i, 0, m){
        int a, b;
        cin >> a >> b;

        if(a > b) swap(a, b);
        
        if(in[a] == 0) ans++;
        in[a]++;
    }

    int q;
    cin >> q;

    rep(i, 0, q){
        int a;
        cin >> a;

        rep1(i, 1, n){
            cout << in[i] << ' ';
        }

        cout << '\n';

        if(a == 3) cout << n - ans << '\n';
        else{
            int b, c;
            cin >> b >> c;

            if(b > c) swap(b, c);

            if(a == 1){
                if(in[b] == 0) ans++;
                in[b]++;
            }else{
                in[b]--;
                if(in[b] == 0) ans--;
            }
        }
    }
}